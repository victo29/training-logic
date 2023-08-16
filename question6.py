cont = 0
resultado = 0
while(True):
    valor = int(input("Digite um valor inteiro: "))
    if valor > 0:
        resultado += valor
        cont += 1
    else:
        media = resultado / cont
        print(resultado)
        print(media)
        break