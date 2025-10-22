import random
# Selection Sort
lista = [random.randrange(100) for _ in range(30)]
print(lista)
for i in range(len(lista)):
  menor = i
  
  for j in range(i,len(lista)):
    if lista[menor] > lista[j]:
      menor = j

  print(f"o menor valor da lista agora é {lista[menor]}")
  if lista[menor] < lista[i]:
    lista[i],lista[menor] = lista[menor],lista[i]
print(lista)