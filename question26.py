def split_and_join(line):
    list_line=[]
    text =""
    tamanho = len(line)
    cont = 0
    for i in line:
        if i != " ":
            text+=i
            cont+=1
        if i == " " or cont == tamanho:
            cont+=1
            list_line.append(text)
            text =""
    return "-".join(list_line)

x = split_and_join("this is a string")
print(x)