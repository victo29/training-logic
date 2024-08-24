# Dados
array = [16,22,34,68,12]
target = 28; 


# Solução
a = dict()

for i in range(len(array)):

    if array[i] in a:
        indice = a[array[i]]
        soma = array[i] + array[indice]
        print(f'a soma de {array[i]} -> [indice: {i}] + {array[indice]} -> [indice: {indice}] é: {soma}')

    result = target - array[i]
    a[result] = i


print(a)
