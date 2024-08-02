import random



def soma_matriz(m1, m2):

    menor_lista = len(m1) if len(m1) <= len(m2) else len(m2)

    soma = 0
    matriz_final= []
    for i in range(menor_lista):
        linha = []

        soma1 = 0
        for k in m1[i]:
            soma1 +=k
        

        soma2 = 0
        for j in m2[i]:
            soma2 += j
        soma = soma1 + soma2

        linha.append(soma)
        matriz_final.append(linha)

    return matriz_final




def gerador_de_matriz(num_colunas, num_linhas):
    matriz = []
   
    for i in range(num_linhas):
        linha = []
        for j in range(num_colunas):
            linha.append(random.randrange(1,100))
        matriz.append(linha)
    return matriz


matriz = gerador_de_matriz(10,7)
matriz2 = gerador_de_matriz(4,5)

matriz_final = soma_matriz(matriz,matriz2)
print(matriz_final)