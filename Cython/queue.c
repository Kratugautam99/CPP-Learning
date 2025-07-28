
// queue.c

#include "queue.h"
#include <stdlib.h>
#include <stdbool.h>

/*
 * A singly‐linked queue of void* values.
 * All push/pop‐head and push‐tail ops are O(1).
 * pop‐tail is O(n) because we must scan for the predecessor.
 */

struct _QueueNode {
    QueueValue            data;
    struct _QueueNode    *next;
};

struct _Queue {
    struct _QueueNode    *head;
    struct _QueueNode    *tail;
};

/*
 * Allocate a new, empty queue.
 * Returns NULL on malloc failure.
 */
Queue *queue_new(void) {
    Queue *q = malloc(sizeof *q);
    if (!q) return NULL;
    q->head = q->tail = NULL;
    return q;
}

/*
 * Free all nodes and then the queue itself.
 * After calling this, the Queue* must not be used again.
 */
void queue_free(Queue *q) {
    struct _QueueNode *n = q->head;
    while (n) {
        struct _QueueNode *tmp = n->next;
        free(n);
        n = tmp;
    }
    free(q);
}

/*
 * Push data at the tail of the queue.
 * Returns 1 on success, 0 on malloc failure.
 */
int queue_push_tail(Queue *q, QueueValue data) {
    struct _QueueNode *node = malloc(sizeof *node);
    if (!node) return 0;
    node->data = data;
    node->next = NULL;

    if (q->tail) {
        q->tail->next = node;
    } else {
        q->head = node;
    }
    q->tail = node;
    return 1;
}

/*
 * Pop a value from the head.
 * Returns the data pointer, or NULL if empty.
 */
QueueValue queue_pop_head(Queue *q) {
    if (!q->head) return NULL;

    struct _QueueNode *node = q->head;
    QueueValue data = node->data;

    q->head = node->next;
    if (!q->head) {
        /* queue is now empty */
        q->tail = NULL;
    }
    free(node);
    return data;
}

/*
 * Peek (read) the data at the head without removing it.
 * Returns the data pointer, or NULL if empty.
 */
QueueValue queue_peek_head(Queue *q) {
    return q->head ? q->head->data : NULL;
}

/*
 * Push data at the head of the queue.
 * Returns 1 on success, 0 on malloc failure.
 */
int queue_push_head(Queue *q, QueueValue data) {
    struct _QueueNode *node = malloc(sizeof *node);
    if (!node) return 0;
    node->data = data;
    node->next = q->head;

    q->head = node;
    if (!q->tail) {
        /* queue was empty */
        q->tail = node;
    }
    return 1;
}

/*
 * Pop a value from the tail.
 * Runs in O(n). Returns the data pointer, or NULL if empty.
 */
QueueValue queue_pop_tail(Queue *q) {
    if (!q->head) return NULL;

    /* single‐node case */
    if (q->head == q->tail) {
        QueueValue data = q->head->data;
        free(q->head);
        q->head = q->tail = NULL;
        return data;
    }

    /* scan for predecessor of tail */
    struct _QueueNode *prev = q->head;
    while (prev->next != q->tail) {
        prev = prev->next;
    }

    QueueValue data = q->tail->data;
    free(q->tail);
    prev->next = NULL;
    q->tail = prev;
    return data;
}

/*
 * Peek (read) the data at the tail without removing it.
 * Returns the data pointer, or NULL if empty.
 */
QueueValue queue_peek_tail(Queue *q) {
    return q->tail ? q->tail->data : NULL;
}

/*
 * True if no elements remain.
 */
bool queue_is_empty(Queue *q) {
    return q->head == NULL;
}

/*
 * Repeatedly pop from head and invoke predicate(user_context, data).
 * If predicate returns >0, keep popping.
 * If it returns 0, stop and return 0.
 * If it returns <0, stop immediately and return -1.
 * Returns 0 on normal stop, -1 on predicate‐error.
 */
int queue_pop_head_until(Queue *q,
                         predicate_func predicate,
                         void *user_context)
{
    while (!queue_is_empty(q)) {
        QueueValue v = queue_pop_head(q);
        int rc = predicate(user_context, v);
        if (rc <= 0) {
            return (rc < 0) ? -1 : 0;
        }
    }
    return 0;
}
