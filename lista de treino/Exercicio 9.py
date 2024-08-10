from random import randint 

cont=0

d25=0
d50=0
d75=0
d100=0

while cont<100:
    n=randint(1,100)
    cont+=1
    if n<=25:
        d25+=1
    if n<=50 and n>25:
        d50+=1
    if n<=75 and  n>50:
        d75+=1
    if n<=100 and n>75:
        d100+=1

print('---------- Estatística de números por inervalo ----------')

print('Quantidade de números entre 1 e 25:',d25)
print('Quantidade de números entre 25 e 50:',d50)
print('Quantidade de números entre 50 e 75:',d75)
print('Quantidade de números entre 75 e 100:',d100)


