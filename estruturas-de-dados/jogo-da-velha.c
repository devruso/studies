#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// jogo da velha ->  vetor com os elementos,
// os elementos encadeados vao ter ' ', trocando para X ou O
// precisa de input para a jogada 
// como fazer o jogador selecionar onde ele quer jogar

// vitoria com variavel de controle


// print com a interface do jogo da velha

typedef struct {
    char arr[3][3];
    char user1, user2;
    
}game;

// Printa o jogo
void printGame(char arr[3][3]){

        printf("\n");
        for(int i = 0; i<3; i++){
            int ctrl = 0;
            for(int j=0; j<3; j++){
               printf("%c", arr[i][j]);
               if(ctrl < 2){
                printf(" | ");
               }
               ctrl++;
        }       
        printf("\n");
        if(i<2){
            printf("----------");
        }
        printf("\n");   
    }  
}

//Inicia a array com espacos vazios
char generateGame(char arr[3][3]){
     for(int i = 0; i<3;i++){
        for(int j = 0; j<3; j++){
            arr[i][j] = ' ';
        }
    }
    return arr[3][3];
}

// Modificar para somente uma funcao para checar a existencia das linhas e colunas
int checkExistance(int l){
    if(l>3 || l <0){
        printf("Linha nao existe! Digite novamente.\n");
        scanf("%c",&l);
         
    }
    return l;
}
int checkCexist(int c){
    if(c > 3 || c < 0){
        printf("Coluna nao existe. Por favor digite novamente.\n");
        scanf("%c", &c);
    }
    return c;
}

// Verificar se opcao escolhida ja tem algo
int verifyOpt(char arr[3][3],int a, int b){
    if(arr[a][b] != ' '){
        printf("Opcao ja escolhida.\n");
    }
     
}

// Marca a opcao escolhida com X ou O

char selectedOpt(char arr[3][3], int a, int b){
    arr[a][b] = 'x'; 
    
}

////////////////////////////////////
int main(){
    char arr[3][3], userChar;
    char userInput;
    int *userChoice[3][3],l,c,*pL,*pC;
    generateGame(arr);

// como fazer o jogador selecionar onde ele quer jogar
    do{
        int usuario = 0;
        int win = 0;
        printGame(arr);
        printf("Selecione a linha e coluna que quer jogar, de 1 a 3 \n");
        scanf("%d%d", &l,&c);
        if(usuario == 0){
            arr[l-1][c-1] = 'X';
            usuario = 1; 
        }else{
            arr[l-1][c-1] = 'O';
            usuario = 0;
        }
        
    }while(l< 0 || l > 2 || c < 0 || c>2 || arr[3][3] != ' ');
    

}