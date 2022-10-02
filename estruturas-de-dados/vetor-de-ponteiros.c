
/*
C�digo usado como exerc�cio em sala no dia 14/09/2022. 
Criar um vetor de pontos atrav�s de uma fun��o. 
*/

#include<stdio.h> // for printf
#include<math.h>  // for math functions
#include<stdlib.h> // for malloc
#include <errno.h> // for error handling

extern int errno ;

typedef struct point {
    float x, y;
} point_t; 

/* 
Cria um vetor de pontos, alocando mem�ria dinamicamente. O n�mero de pontos desejado � passado como par�metro de entrada. A fun��o retorna
o ponteiro para a �rea de mem�ria onde o vetor se inicia.
*/
point_t * vpoint_create(int); 

/* Fun��o para liberar mem�ria previamente alocada para armazenar o vetor de pontos. Entrada: o endere�o para a �rea a ser liberada.
 */
void vpoint_destroy(point_t *); 


void vpoint_destroy(point_t *ptr) {

  if (ptr) free(ptr);
}

point_t * vpoint_create(int n){

  point_t * ptr;

  ptr = (point_t *) malloc(n * sizeof(point_t));

  if (!ptr) {
    int errnum = errno;
    perror("In point_allocation.");
    exit(-1);
  }
  
  for (int i = 0; i < n; i++) {
    ptr[i].x = 0;
    ptr[i].y = 0;
}
  return ptr;
}
  

int main() {

  point_t * v;

  v = vpoint_create(10);
   printf("\n endereco de v %p",v);
  for (int i = 0; i < 10; i++) {
    printf("\n %d:(%f,%f)",i,v[i].x,v[i].y);
  }

}