#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Printa o jogo
void printGame(char arr[3][3]){

        printf("\n\n");
        for(int i = 0; i<3; i++){
        printf("\t");

            int ctrl = 0;
            for(int j=0; j<3; j++){
               printf("%c", arr[i][j]);
               if(ctrl < 2){
                printf(" | ");
               }
               ctrl++;
        }       
        printf("\t\n");
        if(i<2){
            printf("\t----------");
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
/*
    Para verificar a vitoria vai percorrer todo a matriz checando os indices
    ao checar os indices vou armazenar a condicao de vitoria
    podendo ser na diagonal, vertical ou horizontal
    entao ao percorrer a linha e matrizes comparo os caracteres
*/
int verifyWin(char jogo[3][3],int a, int b){
    int WinCondition1 = 0, WinCondition2 = 0;
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3; j++){
            if(jogo[i][j] == 'X'){
                WinCondition1++;
            }else if(jogo[i][j] == 'O'){
                b++;
            }

        }
    }
}

////////////////////////////////////
int main(){
    char arr[3][3], userChar;
    char userInput;
    int win = 0, player=0;
    int l,c,xWin=0,oWin=0;
    generateGame(arr);

    do{
        printGame(arr);
        printf("Selecione a linha e coluna que quer jogar, de 1 a 3 \n");
        scanf("%d%d", &l,&c);

        if(player == 0){
            arr[l-1][c-1] = 'X';
            player++;
            xWin++;

        }    
        else{
            arr[l-1][c-1] = 'O';    
            player--;
            oWin++; 
        }
        if( xWin == 3 || oWin == 3 || xWin == 6 || oWin == 6 || xWin == 9 || oWin == 9 || xWin == 12 || oWin == 12){
                verifyWin(arr[3][3],xWin, oWin);

        }
}while(l< 0 || l > 2 || c < 0 || c>2 || arr[3][3] != ' ');



}