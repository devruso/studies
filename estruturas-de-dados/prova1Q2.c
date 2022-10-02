#include<stdio.h> // for printf
#include<stdlib.h> // for malloc
#include<stdio.h> // for printf


typedef struct point {
    float x, y;
} point_t;

typedef struct tabela_p {
  int n;           // número de vetores de pontos
  int *k;          // número de pontos em cada vetor
  point_t ** ptr;  // vetores de pontos
} tabela_p_t;

tabela_p_t * cria_tabela_pontos(int n, int * k){

  tabela_p_t *ptr_tab;

  ptr_tab = (tabela_p_t *) malloc(sizeof(tabela_p_t));

  if (ptr_tab == 0) {
    return (tabela_p_t *) NULL;
  }
  
  ptr_tab -> n = n; 
  ptr_tab -> k = (int *) malloc(sizeof(int) * n);
  ptr_tab -> ptr = (point_t **) malloc(sizeof(point_t *) * n);
  if (ptr_tab -> k == 0 || ptr_tab -> ptr == 0) {
    return (tabela_p_t *) NULL;
  }

  for(int i = 0; i<n; i++){

    ptr_tab -> k[i] = k[i];
    ptr_tab -> ptr[i] = (point_t *) malloc(sizeof(point_t) * k[i]);
    if (ptr_tab -> ptr[i] == 0) {
      return (tabela_p_t *) NULL;
    }

    for (int j = 0; j < k[i]; j++) {
      ptr_tab -> ptr[i][j].x = 0; 
      ptr_tab -> ptr[i][j].y = 0;
    }
  }
  
  return ptr_tab;
}

void aboveY(tabela_p_t *p, float y);

void aboveY(tabela_p_t *p, float y){
    printf("\n Numero de vetores de pontos: %d",p -> n);
  for (int i = 0; i < p -> n; i++) {
    printf("\n \t Tamanho do vetor %d: %d", i+1, p -> k[i]);
    printf("\n \t Endereco do vetor %d: %p", i+1, p -> ptr[i]);
    printf("\n \t Valores dos pontos");
    for (int j = 0; j < p -> k[i]; j++) {
        if(p-> ptr[i][j].y > y){
            printf("\n \t \t ponto[%d][%d] = (%f,%f)",i+1, j+1,
	            p -> ptr[i][j].x, p -> ptr[i][j].y);
        }
     }
    }
}
int main(){
    tabela_p_t *ptr; 
  int k[] = {1,4,3,2,10}; 
 

  ptr = cria_tabela_pontos(5, k);

  aboveY(ptr, 6);

}
