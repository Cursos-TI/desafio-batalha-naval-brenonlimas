#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int cone[10][10]; 
    int octaedro[10][10];
    int cruz[10][10];
     
    //habilidade cone
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if ((i == 2 && j == 4) || (i == 3 && (j >=3 && j<=5)) || (i == 4 && (j >= 2 && j <= 6))){
                
                cone[i][j] = 1; 

            } else {

                cone[i][j] = 0;
            }

            printf("%d ", cone[i][j]);
        }
        printf("\n");   
    }
        
        printf("\n");

    //habilidade octaedro
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if ((i == 2 && j == 4) || (i == 4 && j == 4) || (i == 3 && ( j >= 3 && j <= 5))){
                
                octaedro[i][j] = 1;

            } else {
                
                octaedro[i][j] = 0;
            }
            
            printf("%d ", octaedro[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\n");

    //habilidade cruz
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if ((i == 2 && j == 4) || (i == 4 && j == 4) || (i == 3 && ( j >= 2 && j <= 6))){
                
                cruz[i][j] = 1;

            } else {
                
                cruz[i][j] = 0;
            }
            
            printf("%d ", cruz[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}
