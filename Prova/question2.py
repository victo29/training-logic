total_loja = 0
for i in range(15):
    valor_produto =  float(input("Digite o valor total do produto: "))
    forma_pagamento = int(input("Digite a forma de pagamento: [ 1 - A VISTA] [ 2- PIX ]  [ 3- CARTÃO ] [ 4- BOLETO ]"))
    valor_final = 0
    if (forma_pagamento == 1 or forma_pagamento == 2):
        valor_final =  valor_produto * 0.95
        total_loja += valor_produto * 0.95
    elif (forma_pagamento == 3):
        print("Você não possui descontos")
        valor_final = valor_produto
        total_loja += valor_produto 
    else: 
        valor_final = valor_produto + 3.50
        total_loja += valor_produto + 3.50
        print ("Foi adicionado R$: 3,50 ao volor total, pois é o custo do boleto.")


    print("o valor do produto é: ",valor_final)

    if (total_loja > 1000.00):
        break

print("o valor total da loja é: ", total_loja)