#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Lista e feita criando um tipo abstrato de dados que aponta para o proximo elemento
typedef struct cell cell_t;

struct cell{
    int element;
    cell_t *next;
};

/* Operacoes envolvendo lista
        A funcao abaixo cria uma variavel tipo cell_t e armazena espaco na memoria para p
        se der certo o proximo elemento que nao esta sera null e o elemento atual sera -1, o que significa que memso vazia
        a lista ja tem um elemento.

    ser der certo retorna a nova celula.
*/
cell_t *newCell(){
    cell_t *p = (cell_t*)malloc(sizeof(cell_t));
    if(p){
        p -> next = NULL;
        p -> element = -1;
        return p;

    }else return(NULL);
}
/*
    Funcao para inserir o elemento. recebe um inteiro e um cabeca 
    
    Vale lembrar que sempre ha uma celula mesmo com uma lista vazia, e celula vazia é substituida com os dados da celula inserida
    e entao uma nova é criada.

    ESSA FUNCAO INSERE NO INICIO. na struct cell_t, existe um ponteiro para o proximo elemento sempre.
    Logo inserimos no incio um elemento e tambem dizemos qual é o endereço do novo inicio.

    !! basicamente essa funcao insere o primeiro elemento, cria um elemento novo e aponta para ele. !!

*/
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