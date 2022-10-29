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
    1,0,0,1,
    1,1,1,0
};

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
    s->svector[s->top] = xy;
    s->top++;
    return TRUE;
}

point_t pop(stk_t *s){

  //  if(isempty(s)) return NULL;

    point_t e = s ->svector[s->top];
    s-> top--;
    return(e);
}

stk_t verifyLab(int a, int b, int X[a][b], point_t o, point_t d){
    stk_t *stk;
    point_t p;
    int n = a * b ;  
    stk = newStack(n);
    int i= o.x,j= o.y;
    int count = 0;
    push(stk,o);
    while(p.x != d.x && p.y != d.y){
        X[i][j] = 2;
        if(X[i+1][j]== 1){
                p.x = i+1;
                p.y = j;
                push(stk, p);
                X[i][j] = 2;
                i++;
                count++;
            }
            else if (X[i-1][j]==1){
                p.x = i-1;
                p.y = j;
                push(stk,p);
                X[i][j] = 2;
                i--;
                count++;
            }
            else if(X[i][j+1]==1){
                p.x = i;
                p.y = j+1;
                push(stk,p);
                X[i][j] = 2;
                j++;
                count++;
            }
             else if (X[i][j-1]==1){
                p.x = i;
                p.y = j-1;
                push(stk,p);
                X[i][j] = 2;
                j--;
                count++;
            }
            else{
                if(X[i][j] == 2){
                    X[i][j] = -1;
                    pop(stk);
                    count--;
                }
            }
    }
                printf("%d ",count); 
}
int main(){
    point_t origem, destino;
    origem.x = 3, origem.y= 2, destino.x=2,destino.y=3;
    verifyLab(4,4,B,origem,destino);
    return printf("funcionando");
}