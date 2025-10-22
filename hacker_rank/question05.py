cont = 1
resultado = 0
cont_fatorial = 1
fatorial= 1
while(cont <= 15):
    val_int =int(input("Escreva um valor inteiro: "))
    while(cont_fatorial <= val_int):
        fatorial *= cont_fatorial
        cont_fatorial += 1
    resultado += fatorial
    cont +=1
print(resultado)