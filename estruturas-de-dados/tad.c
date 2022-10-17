#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int element;
    cell_t *next;
} cell_t;

// Operacoes envolvendo lista
cell_t *newCell(){
    cell_t *p = (cell_t*)malloc(sizeof(cell_t));
    if(p){
        p -> next = NULL;
        p -> element = -1;
        return p;

    }else return(NULL);
}

void *insert(int x, cell_t *lhead){
    cell_t *p = newCell();
    
    p -> next = lhead -> next;
    lhead -> next = p;
    p -> element = x;
}

cell_t *search(int x, cell_t *lhead){
    cell_t *p = lhead;

    while(p->next){
        if(p->next->element==x) return p;
        else p = p->next;
    }
    return p->next;
}

cell_t * delete(int x, cell_t *lhead){
    cell_t *p = search(x,lhead);
    if (p)
    {
        cell_t *q = p -> next;
        p -> next = q ->next;
        free(q);
    }
    
}
int main(){
    cell_t *list = newCell();

}