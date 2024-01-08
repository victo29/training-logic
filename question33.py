# Excluindo valores repetidos e organizando lista
import random
lista = [ random.randint(1,21) for i in range(10)]

indice = 0
while indice <= len(lista)-1:
    for i in range(len(lista)-1,indice,-1):
        if lista[indice] == lista[i]:
            lista.pop(i)
    indice+=1
    
for i in range(len(lista)):
        for j in range(len(lista) -i -1):
            if lista[j] > lista[j + 1]:
                lista[j], lista[j+1]=lista[j+1], lista[j]   

print(lista)
