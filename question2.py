cont = 1
soma = 0
while cont < 500:
    if(cont % 2 == 0):
        soma += cont
        cont = cont + 1
    else:
        cont = cont+1
print(soma)