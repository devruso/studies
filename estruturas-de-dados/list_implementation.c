#include <stdio.h>
#include <stdlib.h>


// lista
typedef struct cell cell_t;

struct cell{
    int element;
    cell_t *next;
};

cell_t *newCell(){
    cell_t *p = (cell_t *)malloc(sizeof(cell_t));
    if(p){
        p->next = NULL;
        p->element = -1;
    }
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

void print(cell_t *p){
    
    while(p->next != NULL){
        printf("\n");
        printf("\n Elemento atual: [%d]",p->element);
        printf("\n QPRóximo elemento: %d",p-> next);
        printf("\n Valor dos itens: \n ");
        printf("\n Item [%d] =  %d",i+1, p->itens[i]);
    }

}
int main(){

    cell_t x,y,z;

    //insert(40,&x);
    cell_t *head = newCell();
    insert(40, head);
    printf(insert(40,head));

return 0;
}