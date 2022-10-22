#include <stdio.h>
#include <stdlib.h>
/*
construir um labirinto que tem recebe 1 matriz nxm
apos a insercao da matriz, percorrer cada célula para verificar
possiveis caminhos. se a celula (i,j) = 0, trava se for (i,j)=1
e possivel
*/
typedef struct point point_t;
typedef enum {FALSE,TRUE} bool;
typedef int* element_t; // elementos como ponteiros

// pilha ou stack

typedef struct cell cell_t;
typedef struct stk stk_t;

struct stk{
    unsigned int top,maxsize;
    element_t *svector;
};

struct cell{
    element_t element;
    cell_t *next;
};
struct point{
    int x;
    int y;
};

int A[3][3] = {
    1,1,1,
    1,0,1,
    0,1,1
};

int B[4][4] ={
    0,0,0,1,
    1,1,1,1,
    1,0,0,0,
    1,1,1,0
};
int findPath(int a, int b, int X[a][b]){
    stk_t *stk;
    point_t *p;
    int n = a * b ;   

    stk_t *s = newStack(n);

}
// criando uma pilha com vetor e coluna
stk_t *newStack(unsigned int n){

    stk_t *p = (stk_t *)malloc(sizeof(element_t));

    if(!p) return NULL;

    p->svector = malloc( n * sizeof(element_t));

    if(!p-> svector) return NULL;

    p->top = 0;
    p->maxsize = n;

    return p;
}

bool isempty(stk_t *s){
    return(s->top ==0);
}

bool isfull(stk_t *s){
    return(s->top == s-> maxsize);
}

//pushing in a vector
bool push(element_t e, stk_t *s){
    if(isfull(s)) return FALSE;

    s->svector[s->top] = e;
    s->top++;
    return TRUE;
}

element_t pop(stk_t *s){

    if(isempty(s)) return NULL;

    element_t e = s ->svector[s->top];
    s-> top--;
    return(e);
}
int main(){

    return printf("funcionando");
}