#include<stdio.h>


int main(){

    int num     = 0;
    int cont    = 0;
    float soma  = 0;
    int ant     = 0;

    printf("digite uma sequencia de numeros em que so vai parar quando uma sequencia de 3 numeros crescentes em ordem: ");
    scanf("%d",&num);

    soma = num;

    while(cont<2){
        ant=num;
        scanf("%d",&num);
        
        if(num>ant){
            cont++;
            soma=soma+num;
        }
        
        else{
            cont=0;
            soma=num;
        }

    }

printf("A media da sequencia informada e: ");
printf("%f",soma/3);


return 0;

}