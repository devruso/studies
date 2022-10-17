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
////////////////////////////////////

int verifyWin(char jogo[3][3]){
    int winCondition1 = 0, winCondition2 = 1;

        // Verifica se a primeira linha for X, a linha, a coluna e a diagonal principal
         if(jogo[1][1]=='X'){

                if(jogo[1][2]=='X' && jogo[1][3]=='X'){
                        winCondition1++;
                    }
                    if(jogo[2][1]=='X' && jogo[3][1]=='X'){
                            winCondition1++;
                    }
        }

        // Verifica quando o primeiro termo e 'O' a linha, coluna
            if(jogo[1][1]=='O'){

                if(jogo[1][2]=='O' && jogo[1][3]=='O'){
                        winCondition2++;
                    }
                    if(jogo[2][1]=='O' && jogo[3][1]=='O'){
                            winCondition2++;
                        }
            }
        //Checa quando ultima linha igual X    
            if(jogo[3][3]=='X'){
                if(jogo[3][2]=='X' && jogo[3][3]=='X'){
                    winCondition1++;
                }
                if(jogo[2][3]=='X' && jogo[1][3]=='X'){
                    winCondition1++;
                }
            }
        // Checa quando ultima linha igual O

            if(jogo[3][3]=='O'){
                if(jogo[3][2]=='O' && jogo[3][3]=='O'){
                    winCondition2++;
                }
                if(jogo[2][3]=='O' && jogo[1][3]=='O'){
                    winCondition2++;
                }
            }            

            if(jogo[2][2] == 'X'){
                if(jogo[2][1]== 'X' && jogo[2][3]=='X' || jogo[1][1]=='X' && jogo[3][3]=='X' || jogo[1][2]=='X'&& jogo[3][2]=='X' || jogo[1][3]=='X'&&jogo[3][1]=='X'){
                        winCondition1++;
                }
            }
            if(jogo[2][2] == 'O'){
                if(jogo[2][1]== 'O' && jogo[2][3]=='O' || jogo[1][1]=='O' && jogo[3][3]=='O' || jogo[1][2]=='O'&& jogo[3][2]=='O' || jogo[1][3]=='O'&&jogo[3][1]=='O'){
                        winCondition2++;
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
    int existingChar;
    do{
        printGame(arr);
        printf("Selecione a linha e coluna que quer jogar, de 1 a 3 \n");
        scanf("%d%d", &l,&c);
        
        int existingChar = strcmp(arr[l-1][c-1],' ');
        
        if(player == 0 && existingChar == 0){
                arr[l-1][c-1] = 'X';
                player++;
                xWin++;
        }    
        else if(player == 1){
                if(existingChar = 0){
                arr[l-1][c-1] = 'O';
                player--;
                oWin++;
            }
           
        }
        if(xWin >= 3 && oWin >= 3){
                verifyWin(arr[3][3]);

        }
}while(l< 0 || l > 2 || c < 0 || c>2 || arr[3][3] != ' ');

}