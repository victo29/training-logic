def imprimi_pe_arvore(arvore):
    p = " *"
    p2 = "***"
    x =""
    qtd_espaco = arvore//2
    for i in range(qtd_espaco-1):
        x += " "
        
    print(x,p)
    print(x,p2)

def imprimi_corpo_arvore(arvore):
    cont=0
    p=0
    while cont < arvore:
        if cont == 0:
            x =""
            qtd_espaco = arvore//2
            for i in range(qtd_espaco):
                x += " "
            print(x,"*")
            cont=+1
        else:
            cont+=2
            asteriscos=""
            for i in range(cont):
                asteriscos+="*"

            p+=1
            x =""
            qtd_espaco = arvore//2
            for i in range(qtd_espaco-p):
                x += " "
            print(x,asteriscos)
    imprimi_pe_arvore(arvore)
                




arvore_p = int(input())
arvore_s = int(input())

imprimi_corpo_arvore(arvore_p)
print("")
imprimi_corpo_arvore(arvore_s)