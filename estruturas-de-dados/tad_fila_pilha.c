#include <stdio.h>
#include <stdlib.h>

typedef enum {FALSE,TRUE} bool;
typedef int* element_t; // elementos como ponteiros
typedef struct queue queue_t;

struct queue{
    unsigned int first, last, maxsize;
    element_t *qvector; // vetor de elementos
};

queue_t *newQueue(unsigned int n){
    queue_t *p = (queue_t *)malloc(sizeof(queue_t));
    if(!p) return NULL;

    p->qvector = malloc( n *sizeof(element_t));
    if(!p->qvector) return NULL;        

    p->first = p -> last = 0;
    p -> maxsize = n;

    return p;
}

bool enqueue(element_t  e, element_t *q){
    if(isfull(q)) return FALSE;
    q->qvector[q->last++] = e;
}
