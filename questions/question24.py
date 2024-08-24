def cria_lista_nomes(string):

    nomes = []
    cont = 0
    text = ""
    for i in string:
        cont += 1
        if i != " ":
            text += i
        if i == " " or cont == len(string):
            nomes.append([text])
            text =""
    return nomes

def verifica_dificuldade(nomes):
    cont = -1
    for i in nomes:
        texto = i[0] 
        cont+=1
        consoantes = "bcdfghjklmnpqrstvwxyz"
        facilidade = True


        for i in range(len(texto) - 1):
            if texto[i] in consoantes and texto[i + 1] in consoantes and texto[i+2] in consoantes:
                nomes[cont].append("difícil")
                facilidade = False
                break
        if facilidade:
            nomes[cont].append("facil")

    return nomes

def verifica_origem(nomes):
    cont =-1
    for i in nomes:
        texto = i[0]
        cont+=1
        if "sch" in texto:
            nomes[cont].append("de origem alemã")
            continue
        elif "cc" in texto or "zz" in texto:
            nomes[cont].append("de origem italiana")
            continue
        elif "ão" in texto:
            nomes[cont].append("de origem portuguesa")
            continue
        vogais = "aeiou"
        for i in range(len(texto) - 1):
            if texto[i] in vogais and texto[i + 1] in vogais and texto[i+2] in vogais:
                nomes[cont].append("de origem africana")
                break
    return nomes
        
                
        


nomes = cria_lista_nomes(input("Digite os nomes aqui: "))
nomes = verifica_dificuldade(nomes)
nomes = verifica_origem(nomes)
for i in nomes:
    print(" ".join(i))
