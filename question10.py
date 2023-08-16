cont = 0
dividendo = int(input("Digite o dividendo: "))
divisor = int(input("Digite o divisor: "))
while(divisor<=dividendo):
    dividendo -= divisor
    cont +=1
print(cont)