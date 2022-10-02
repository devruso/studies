#include<stdio.h> // for printf
#include<stdlib.h> // for malloc
#include<stdio.h> // for printf




///////////////////////////////////////////////////////////
typedef struct data {
  int matricula; // id do item de dado
  int nitens;    // no. de itens a serem associados a matricula
  int *itens;    // vetor de itens a ser alocado dinamicamente
} data_t;

data_t *newData(int mat , int n);

void assign(data_t *p, int *v);

void print(data_t *p);

///////////////////////////////////////////////////////////

data_t *newData(int mat , int n){

    data_t *ptr_tab;
    
    ptr_tab = (data_t *) malloc(sizeof(data_t) * n);

    ptr_tab -> matricula = mat;
    ptr_tab -> nitens = n;
    ptr_tab -> itens = (int *) malloc(sizeof(int) * n);

    return ptr_tab;
}

///////////////////////////////////////////////////////////

void assign(data_t *p, int *v){

   for(int i = 0; i < p->nitens; i++){
        p-> itens[i] = v[i];
   }

}

///////////////////////////////////////////////////////////

void print(data_t *p){

    printf("\n Numero da matricula: %d",p->matricula);
    printf("\n Quantidade de itens alocados: %d",p-> nitens);
    printf("\n Valor dos itens: \n ");

    for(int i=0; i< p->nitens; i++){
        printf("\n Item [%d] =  %d",i+1, p->itens[i]);
    }

}

///////////////////////////////////////////////////////////

int main() {

  data_t * d = newData(10,5);
  int v[] = {1,2,3,4,5};

  if (d) {
    assign(d,v);
    print(d);
  }
}