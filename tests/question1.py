x = float(input("Digite o lado do retânglo A: "))
y = float(input("Digite o lado do retângulo B: "))

if(x==y):
    a = x*y
    d = x*(2**0.5)
    print(f"O valor da área do QUADRADO é: {a} / O valor da diagonal do QUADRADO é: {d}")
else:
    a = x*y
    d = (x**2 + y**2)**0.5
    print(f"O valor da área do RETÂNGULO é: {a} / O valor da diagonal do RETÂNGULO é: {d}")
