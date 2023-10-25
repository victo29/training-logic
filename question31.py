import random

# Bubble Sort
def bubble_sort(lista):
    for i in range(len(lista)):
        for j in range(len(lista) -i -1):
            if lista[j] > lista[j + 1]:
                lista[j], lista[j+1]=lista[j+1], lista[j]
    print(lista)

bubble_sort([45,56,12,67,32])