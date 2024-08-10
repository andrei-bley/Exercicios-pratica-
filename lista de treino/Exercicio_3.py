print('digite uma sequencia de números em que so vai parar quando uma sequência de 3 números crescentes em ordem')

num=int(input('insira um número: '))
cont=0
soma=0
ant=0
soma=num

while cont<2:
    ant=num
    num=int(input('insira um número: '))
    
    if num>ant:
        cont+=1
        soma+=num
        

    else:
        cont=0
        soma=num



print(f"A média da sequencia informada é: {soma/3}")