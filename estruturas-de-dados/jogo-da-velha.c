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

char generateGame(char arr[3][3]){
     for(int i = 0; i<3;i++){
        for(int j = 0; j<3; j++){
            arr[i][j] = ' ';
        }
    }
    return arr[3][3];
}

int checkLexist(int l){
    while(l>3 || l <0){
        printf("Linha nao existe! Digite novamente.");
        scanf("%c",&l);
         
    }
}
int checkCexist(int c){
    while(c > 3 || c < 0){
        printf("Coluna nao existe. Por favor digite novamente.");
        scanf("%c", &c);
    }
}

int main(){
    char arr[3][3], userChar;
    char userInput;
    int *userChoice[3][3],l,c;
    generateGame(arr);
// como fazer o jogador selecionar onde ele quer jogar
    printf("Deseja comecar com X ou O?\n");
    scanf("%c",&userInput);
    printf("Onde deseja jogar?\n");
    printGame(arr);
    printf("Para selecionar onde quer jogar, selecione a linha e coluna que quer jogar, de 1 a 3\n");
    scanf("%c",&l);
    scanf("%c",&c);

    checkLexist(l);

    checkCexist(c);
    
    


}