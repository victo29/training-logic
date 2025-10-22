
def Divisores(x):
    cont = 0
    for i in range(x):
        cont +=1
        if x % cont == 0:
            print(cont,"é divisor de ", x)

def NumPrimos():
    while(True):
        valor = int(input("Digite um valor: "))
        cont = 0
        primo = 0
        if valor > 0:
            
            for i in range(valor):
                cont += 1
                if valor % cont == 0:
                    primo += 1

            if primo > 2:
                print( valor ," não é um número é primo")
                print("Seus divisores são: ")
                Divisores(valor)  
                break  
            else: 
                print( valor ,"é um número é primo")
                break
        else:
            print("Digite outro valor!")

NumPrimos()
