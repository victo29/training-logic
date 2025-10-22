def merge_the_tools(string, k):
    cont=0
    lista = list(string)

    contador = 0  
    lista_b = []
    while True:
        if cont < k:
            lista_b.append(lista[0])
            lista.pop(0)
            cont+=1 
            contador = 0
        if cont == k:
            while True:
                for i in range(len(lista_b)-1,contador,-1):
                    if lista_b[contador] == lista_b[i]:
                        lista_b.pop(i)
                contador+=1
                if contador == len(lista_b):
                    break
            print(''.join(map(str, lista_b)))
            lista_b.clear()
            cont = 0
        if len(lista) == 0:
            break

string, k = input(), int(input())
merge_the_tools(string, k)