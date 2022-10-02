#include <stdio.h>
#include <stdlib.h>


typedef struct{
    float x,y;
}point_t;

typedef struct{
    int s; // numero de vetores de pontos
    int *k; // numero de pontos em cada vetor
    point_t **ptr; //vetores de pontos
}tabela_p_t;


tabela_p_t  *createPoint(int s, int * k) {
    
    tabela_p_t *ptr_tab;
    ptr_tab = (tabela_p_t*)malloc(s * sizeof(tabela_p_t));

    if(ptr_tab == 0){
        return (tabela_p_t*) NULL;
    }

    

}
int main(){
    
}
