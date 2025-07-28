/* queue.h */
#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>  /* for bool */

/* Opaque queue handle and stored value type */
typedef struct _Queue   Queue;
typedef void *          QueueValue;

/* Allocation and teardown */
Queue * queue_new(void);
void    queue_free(Queue *queue);

/* Head operations */
int        queue_push_head(Queue *queue, QueueValue data);
QueueValue queue_pop_head(Queue *queue);
QueueValue queue_peek_head(Queue *queue);

/* Tail operations */
int        queue_push_tail(Queue *queue, QueueValue data);
QueueValue queue_pop_tail(Queue *queue);
QueueValue queue_peek_tail(Queue *queue);

/* Query */
bool queue_is_empty(Queue *queue);

/* Predicate callback:
 *   return  1 to continue popping,
 *           0 to stop,
 *          -1 on error
 */
typedef int (*predicate_func)(void *user_context,
                              QueueValue data);

/* Pop from head until predicate returns true;
 * returns -1 on predicate error, 0 otherwise.
 */
int queue_pop_head_until(Queue *queue,
                         predicate_func predicate,
                         void *user_context);

#endif /* QUEUE_H */
