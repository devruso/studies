#include <stdio.h>
#include <stdlib.h>
/*
Lembrando o exercício (labirinto): Há um labirinto, representado por uma matriz n por m. Cada célula (x,y) da matriz pode ser 1 (livre) ou 0 (ocupada). Dada uma posição origem (xo,yo) e uma posição destino (xd,yd), construa uma função verifLab(int L[][], int n, int m, point_t o, point_t d) que recebe o labirinto L, com n linhas e m colunas, e determina se há um caminho no labirinto de o:(xo,yo) a d:(xd,yd).
*/
typedef struct point point_t;
typedef enum {FALSE,TRUE} bool;
typedef int* element_t; // elementos como ponteiros

// pilha ou stack

typedef struct cell cell_t;
typedef struct stk stk_t;

struct stk{
    unsigned int maxsize,top;
    point_t *svector;
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
int verifyLab(int a, int b, int X[a][b], point_t o, point_t d){
    stk_t *stk;
    point_t *p;
    int n = a * b ;  
    newStack(n);
    if(o.x == 1 && o.y == 1){
        //push(o, stk);
    }

}
// criando uma pilha 
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
    return(s->top == 0);
}

bool isfull(stk_t *s){
    return(s->top == s-> maxsize);
}

//pushing in a vector
bool push(stk_t *s, point_t xy){
    if(isfull(s)) return FALSE;
    point_t *p;
    s->svector[s->top] = xy;
    s->top++;
    return TRUE;
}

point_t pop(stk_t *s){

    if(isempty(s)) return NULL;

    point_t e = s ->svector[s->top];
    s-> top--;
    return(e);
}
int main(){

    return printf("funcionando");
}