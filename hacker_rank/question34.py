
def cria_dicionario(valor):
    dic = dict()
    for i in range(1,valor+1):
        tupla = (str(i),str(i*i)),
        dic.update(tupla)
    print(dic) 


valor = int(input('Enter a number: '))
cria_dicionario(valor)