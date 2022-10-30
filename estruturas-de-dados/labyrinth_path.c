#include <stdio.h>
#include <stdlib.h>

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

   // if(isempty(s)) return NULL;

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
    push(stk,o);
    while(i != d.x && j != d.y){
        // iniciar a coordenada atual com valor = 2, para saber qual caminho foi percorrido       
            X[i][j]=2;
        if(X[i+1][j] == 1 && i+1 < a){
                p.x = i+1;
                p.y = j;
                push(stk, p);
                X[i][j] = 2;
                i++;
            }else if (X[i-1][j] == 1 && i-1 > a){
                p.x = i-1;
                p.y = j;
                push(stk,p);
                X[i][j] = 2;
                i--;
            }else if(X[i][j+1] == 1 && j+1 < b){
                p.x = i;
                p.y = j+1;
                push(stk,p);
                X[i][j] = 2;
                j++;
            }else if (X[i][j-1] == 1 && j-1 > b){
                p.x = i;
                p.y = j-1;
                push(stk,p);
                X[i][j] = 2;
                j--;
            }else{
            //  Caso nao haja caminho disponivel, atualiza o ponto atual para -1
            //  Volta a linha e a coluna a para a posicao anterior a do topo
            //  No final retira o elemento
                if(X[i][j]== 2){
                    X[i][j] = -1;
                    i = stk->svector[stk->top-1].x;
                    j = stk->svector[stk->top-1].y;
                    pop(stk);
                }
                if(isempty(stk) == TRUE){
                        break;
                    }
            }
    }
    if(!isempty(stk)){
            printf("Ha caminho disponivel!");

    }else{
        printf("Nao ha caminho disponivel :(");
    }
    return *stk;
}

int A[3][4] = {
    1,1,1,1,
    0,0,1,1,
    0,1,1,0
};

int B[4][4] = {
    0,0,0,1,
    1,1,1,1,
    1,0,0,1,
    1,1,1,0
};

int main(){
    point_t origem, destino;
    origem.x = 0, origem.y= 0, destino.x=2,destino.y=1;
    verifyLab(3,4,A,origem,destino);
    
    return 0;
}

