import random
#busca binaria

def gera_lista_busca_valor(x):
    lista = [random.randrange(100) for i in range(x)]
    lista.sort()
    print(lista)
    valor_buscar = int(input("Digite um valor a ser procurado: "))
    contador = 0
    inicio = 0
    fim = len(lista)-1
    while inicio <= fim:
        contador+=1
        meio = round((inicio+fim)/2)
        if valor_buscar == lista[meio]:
            print("Valor encontrado")
            break
        elif valor_buscar > lista[meio]:
            inicio = meio+1
        else:
            fim = meio -1
        
    if inicio > fim:
        print("valor não está na lista")

tamanho_da_lista = int(input("Digite o tamanho da lista: "))
gera_lista_busca_valor(tamanho_da_lista)