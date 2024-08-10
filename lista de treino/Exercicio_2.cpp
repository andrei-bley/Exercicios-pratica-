#include<stdio.h>

int main(){
    int num   = 0;
    int ant   = 0;
    int maior = 0;
    
    printf("insira uma sequencia de numeros que se encerrara quando se digitar zero, apos um numero impar positivo: ");
    scanf("%d",&num);

    while(num!=0 || ant%2==0){
        ant=num;
        if (num%2!=0){
            if (num>maior){
                maior=num;
            }
        }
        printf("insira um número: ");
        scanf("%d",&num);
    }
    printf("%d",maior);
return 0;

}