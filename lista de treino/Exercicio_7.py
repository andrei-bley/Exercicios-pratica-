

cont=0
den=1
s=0

while cont<50:
    s=s+(-1)**cont/(den)**3
    den=den+2
    cont+=1

pi= (s*32)**(1/3)

print(f"o valor de pi é: {pi}")


    
