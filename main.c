#include <stdio.h>
#include <stdlib.h>
int main()
{

  int a,b;
  printf("Informe o primeiro Numero ");
  scanf("%d", &a);
    printf("Informe o Segundo Numero ");
    scanf("%d",&b);

    int Maior(int a,int b){
if(a > b) return a;
    else return b;
}
      printf("\nO maior Numero: %d",Maior(a,b));
      return 0;
}

