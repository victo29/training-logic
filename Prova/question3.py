valor_total = float(input("Digite o valor total da compra: "))
valor_final = 0
desconto = "0%"
fidelidade = int(input("Digite o estado do cliente: [ 1 - NOVATO ] [ 2 - ANTIGO ] [ 3 - DESCONHECIDO ]: "))
if fidelidade == 1: 
    valor_final =  valor_total * 0.90
    desconto = "10%"
elif fidelidade == 2:
    valor_final = (valor_total * 0.95)
    desconto = "5%"
else:
    valor_final = valor_total

print(f"O valor total era de: {valor_total}, com o desconto de: {desconto}, o valor final foi: {valor_final} ")
    