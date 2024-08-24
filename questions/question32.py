def retorna_resto(num1,num2):
    contador = 1
    while contador < num1:
        if num2 * contador == num1:
            return f'O resto de divisão de {num1} e {num2} é 0'
        contador +=1
    contador = 1
    while True:
        if (contador * num2) > num1:
            contador -=1
            return f'O resto de divisão de {num1} e {num2} é {num1 - (contador * num2) }'
        contador+=1


print(retorna_resto(20,7))
