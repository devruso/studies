#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int element;
    cell_t *next;
} cell_t;

cell_t *newCell(){
    cell_t *p = (cell_t*)malloc(sizeof(cell_t));
    if(p){
        p -> next = NULL;
        p -> element = -1;
        return p;

    }else return(NULL);
}
int main(){
    cell_t *list = newCell();

}