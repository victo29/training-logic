import random


def insertion_sort(lista):
  for i in range(1,len(lista)):
    j = i
    print(f"i vale {i}")
    while (j >0 and (lista[j-1]>lista[j])):
      lista[j],lista[j-1]  = lista[j-1],lista[j]

      j-=1
  print(f"Lista ordenada é:\n{lista}")


lista = [random.randrange(100) for _ in range(5)]
print(lista)

insertion_sort(lista)