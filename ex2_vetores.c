#include <stdio.h>
#include <stdlib.h>

//2) Escreva um programa em C que encontra o maior elemento em um vetor de 10
//valores digitados pelo usuário.

int main (){

    int  Auxmax , i;
    //int v[]= {1,2,3,4,5,6,7,8,9,10};
    int v[10];
    // & = endereço de  (em geral o local onde uma variável está alocada na memória)

    for (i = 0; i < 10; i++){
        printf ("\n por gentiliza digite algum valor ");
        scanf ("%d",&v[i]);
    }
    int *max = &Auxmax;

    for (i = 0; i < 10 ; i++){
        if ( v[i] > Auxmax ){
            Auxmax = v[i];
        }
    }

    printf("\n o maior elemento do vetor é %d \n", *max);
  
    return 0;
}

/*
Resolva todos os exercícios a seguir manipulando as variáveis por meio de ponteiros. 
Uma vez declaradas e inicializadas, as variáveis somente podem ser utilizadas 
para a obtenção de seu endereço. A partir daí, elas somente podem
ser manipuladas por meio de ponteiros declarados e inicializados apropriadamente.
*/