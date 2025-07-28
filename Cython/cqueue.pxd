# queue.pxd

cdef extern from "queue.h":
    # Opaque queue type and element alias
    ctypedef struct Queue
    ctypedef void* QueueValue

    # Allocation and cleanup
    Queue* queue_new()
    void   queue_free(Queue* q)

    # Head operations
    int        queue_push_head(Queue* q, QueueValue data)
    QueueValue queue_pop_head(Queue* q)
    QueueValue queue_peek_head(Queue* q)

    # Tail operations
    int        queue_push_tail(Queue* q, QueueValue data)
    QueueValue queue_pop_tail(Queue* q)
    QueueValue queue_peek_tail(Queue* q)

    # Query
    bint queue_is_empty(Queue* q)

    # Predicate callback typedef
    ctypedef int (*predicate_func)(void* user_context,
                                   QueueValue data)

    # Pop-until with predicate and user context
    int queue_pop_head_until(Queue* q,
                             predicate_func predicate,
                             void* user_context)
