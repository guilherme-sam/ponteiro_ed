#include <stdio.h>
#include <stdlib.h>

int main (){
//1) Escreva um programa em C que lê 15 números inteiros e os armazena em um vetor.
//A seguir, o programa exibe cada número seguido da mensagem “par” ou “ímpar”./
    int v[15];
    int i;
    int zero=0,um=1;
    
   
    for (int i = 0; i < 15; i++){
       
        printf ("\n digite %d o valor ",i+1);
        scanf ("%d",&v[i]); 

    }
     
    /*for (int i = 0; i < 15; i=i+2){
        printf ("\n v[%d] = %d : %s \n",i,v[i], v[i]%2 == 0 ? "par" : "impar");  

    }*/
    int *par = &zero;
    int *impar = &um;



    for (int i = 0; i < 15; i++){
        if (v[i]%2 == *par){
            printf("\n v[%d] = par  \n ",v[i] );
        }
        else 
            printf("\n v[%d] = impar  \n ",v[i] );
    }

    return 0;
};

/*
Resolva todos os exercícios a seguir manipulando as variáveis por meio de ponteiros. 
Uma vez declaradas e inicializadas, as variáveis somente podem ser utilizadas 
para a obtenção de seu endereço. A partir daí, elas somente podem
ser manipuladas por meio de ponteiros declarados e inicializados apropriadamente.
*/