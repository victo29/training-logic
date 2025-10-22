

def divisores(x):
    resut = 0
    for i in range(1,x):
        if x % i == 0:
            resut += i
    if resut == x:
        return True
    else:
        return False
   



def numperfects(x):
    for i in range(x):
        if divisores(i) == True:
            print(i, "É um número perfeito")
       
y = int(input("Digite um valor: "))
numperfects(y)