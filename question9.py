ma = 0
me = 0
cont = 0
while(True):
    valor = int(input("Digite um valor (-1 para parar): "))
    if (valor < 0) :
        break

    if cont == 0:
        me = valor
        ma = valor
    elif ma < valor:
        ma = valor
    elif me > valor:
        me = valor
    
    cont +=1

print(f"O maior valor é {ma} e o menor {me}")