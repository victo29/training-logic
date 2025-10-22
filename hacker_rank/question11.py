MAXIMO = 50
PESO_ACEITAVEL = 10
vida_util = 15
valor_peso = 0
liberacao = True
while(vida_util != 0 ):
    valor_peso += int(input("Digite o valor a ser pesado: "))

    if (valor_peso > MAXIMO ) :
        break
    elif (valor_peso > PESO_ACEITAVEL):
        print(f"O valor do total da balança foi de: {valor_peso}")
        valor_peso = 0
        vida_util -=1
    

print("A balança deve ser substituida")