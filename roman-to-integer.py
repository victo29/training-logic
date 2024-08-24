def romanToInt(s: str) -> int:
    romanNumbers = {
        "I":1,
        "V":5,
        "X":10,
        "L":50,
        "C":100,
        "D":500,
        "M":1000
    }
    tamanho = len(s)
    valores = []
    for i in range(tamanho):
        if i == 0:
            valores.append(romanNumbers.get(s[i]))
        elif romanNumbers.get(s[i]) > romanNumbers.get(s[i-1]):
            novoValor = romanNumbers.get(s[i]) - valores[-1] 
            valores.pop()
            valores.append(novoValor)
        elif  romanNumbers.get(s[i]) == romanNumbers.get(s[i-1]):
            novoValor = romanNumbers.get(s[i]) + valores[-1] 
            valores.pop()
            valores.append(novoValor)
        else:
            novoValor = romanNumbers.get(s[i])
            valores.append(novoValor)

    return sum(valores)


print(romanToInt("MDXV"))
        