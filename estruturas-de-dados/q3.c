#include<stdio.h> // for printf
#include<stdlib.h> // for malloc
#include<stdio.h> // for printf

/* 

 Exerc�cio resolvido em sala. 
1) Criar uma estrutura tabela_p_t composta de: 
   - inteiro n;
   - um vetor de inteiros k; 
   - um vetor de ponteiros para ponto ptr
   - usar a estrutura de pontos j� criada em sala (point_t)

2) Criar uma fun��o que recebe um inteiro n e retorna o endere�o da 
estrutura criada via aloca��o din�mica de mem�ria. A fun��o deve criar um vetor de pontos (x,y) para cada posi��o dos n ponteiros indicados na estrutura. Mais especificamente:
   - alocar mem�ria para tabela_p_t
   - alocar mem�ria para o vetor de inteiros k
   - alocar mem�ria para ptr[i] de tamanho k[i] para cada i = 0,...,n
   - iniciar os pontos com (0,0)
   - retornar o endere�o da estrutura alocada
3) Criar uma fun��o para desalocar todo o espa�o criado para tabela_p_t
*/

// Estrutura do tipo point_t
typedef struct point {
    float x, y;
} point_t;

// Estrutura a ser usada no exec�cio
typedef struct tabela_p {

  int n;           // n�mero de vetores de pontos
  int *k;          // n�mero de pontos em cada vetor
  point_t ** ptr;  // vetores de pontos
} tabela_p_t;


void destroi_tabela_pontos(tabela_p_t *ptr) {

  for (int i = 0; i < ptr->n; i++) { 
      free(ptr->ptr[i]); // desaloca vetor de pontos para posi��o i
    }
    free(ptr->k); // desaloca vetor de inteiros k
    free(ptr->ptr); // desaloca tabela 
  }

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

void imprime_tabela_pontos(tabela_p_t *ptr) {

  printf("\n Numero de vetores de pontos: %d",ptr -> n);
  for (int i = 0; i < ptr -> n; i++) {
    printf("\n \t Tamanho do vetor %d: %d", i, ptr -> k[i]);
    printf("\n \t Endereco do vetor %d: %p", i, ptr -> ptr[i]);
    printf("\n \t Valores dos pontos");
    for (int j = 0; j < ptr -> k[i]; j++) {
      printf("\n \t \t ponto[%d][%d] = (%f,%f)",i, j,
	     ptr -> ptr[i][j].x, ptr -> ptr[i][j].y);
    }
  }


}

int main(){

  tabela_p_t *ptr; 
  int k[] = {1,4,3,2,10}; 
 

  ptr = cria_tabela_pontos(5, k);
  if (ptr) {
    imprime_tabela_pontos(ptr); 
    destroi_tabela_pontos(ptr);
  }
}