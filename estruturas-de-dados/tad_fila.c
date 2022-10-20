#include <stdio.h>
#include <stdlib.h>

typedef enum {FALSE,TRUE} bool;
typedef int* element_t; // elementos como ponteiros
typedef struct queue queue_t;

// fila ou stack
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

bool enqueue(element_t  e, queue_t *q){
    if(isfull(q)) return FALSE;
    q->qvector[q->last++] = e;
    if(q-> last = q -> maxsize) q->last = 0;

    return TRUE;
}

element_t dequeue(queue_t *q){
    if(isempty(q)) return NULL;

    int f = q -> first++;
    
    if(q->first == q-> maxsize) q->first =0;
    
    return ((q->qvector[f]));
}

bool isempty(queue_t *q){
    return(q->first == q->last);
}

bool isfull(queue_t *q){
    return((q->last+1) % (q->maxsize) == q->first);
}

// pilha ou pile
typedef struct cell cell_t;
typedef int *element_t;
typedef struct stk stk_t;
typedef enum {FALSE,TRUE};

/*
 Sem ser em uma pilha de vetores
    struct stk {
        cell_t *top;
        unsigned int size;
    };

*/
// pilha de vetores
struct stk{
    unsigned int top,size,maxsize;
    element_t *svector;
};


struct cell{
    element_t element;
    cell_t *next;
};

bool push(element_t e, stk_t *s){
    cell_t *p = newCell();
    if(!p) return FALSE;

    p->next = s->top;
    s->top = p;
    s->size++;
    p->element = e;
    return TRUE;
}

element_t pop(stk_t *s){

    if(!s || !(s->top)) return NULL;

    cell_t *p = s -> top;
    element_t e = s -> top -> element;
    s -> top = s ->top -> next;
    s-> size --;
    free(p);

    return(e);
}
// criando uma pilha com vetor


stk_t *newStack(unsigned int n){

    stk_t *p = (stk_t *)malloc(sizeof(element_t));

    if(!p->svector) return NULL;

    p->svector = malloc( n * sizeof(element_t));

    if(!p-> svector) return NULL;

    p->top = 0;
    p->maxsize = n;

    return p;
}

void display(queue_t *);
unsigned int currentSize(stk_t *);



int main(){
    
}