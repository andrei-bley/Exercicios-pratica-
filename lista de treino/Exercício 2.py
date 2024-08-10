


num=int(input('insira uma sequencia de numeros que se encerrará quando se digitar zero, após um úmero impar positivo:'))
ant=0

maior=0
while num!=0 or ant%2==0:
    ant=num
    if num%2!=0:
        if num>maior:
            maior=num
    num=int(input('insira um número:'))
    

print(maior)


    
        