valortotal = 0
x = True
while(x):
    comodo = input("Digite o nome do cômodo: ")
    largura = float(input("Digite a largura: "))
    comprimento = float(input("Digite o comprimento: "))
    area = comprimento*largura
    valortotal += area
    print(area)
    y = input("você quer continuar? [SIM]/[NÃO]")
    if(y == "NÃO"):
        print(valortotal)
        break
