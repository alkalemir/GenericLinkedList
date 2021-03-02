#ifndef linkedlist_h
#define linkedlist_h

struct _node {
    struct _node * next;
    struct _node * prev;
    void * data;
};

#include <stddef.h>

struct _linkedlist {
    struct _node * root;
    struct _node * tail;
    size_t typesize;
    size_t len;
};

typedef struct _node Node;
typedef struct _linkedlist LL;
typedef _Bool (*fptr_t)(void *, void *);


LL * initLinkedList(const size_t typeSize);
_Bool addNode(LL * ptr, void * data);
_Bool addAt(LL * ptr, void * data, size_t idx);
_Bool deleteAt(LL * ptr, size_t idx);
Node * linearSearch(const LL * ptr, const void * data);
void sortList(LL * ptr, fptr_t fp);
void deleteList(LL * ptr);

#endif
