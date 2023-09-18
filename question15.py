alunos = []
for _ in range(int(input())):
    name = input()
    score = float(input())
    alunos.append(name)
    alunos.append(score)


notas= []
for i in alunos:
    if type(i) == float:
        notas.append(i)


segunda_menor = 0
mi = min(notas)
for i in notas:
    if segunda_menor == 0 and i > mi:
        segunda_menor = i
    elif i < segunda_menor and i > mi:
        segunda_menor = i

alunos_notas_baixas = []
while True:
    try:
        index = alunos.index(segunda_menor)
    except ValueError:
        break
    alunos_notas_baixas.append(alunos[index - 1])
    alunos.remove(segunda_menor)

alunos_notas_baixas.sort()
for i in alunos_notas_baixas:
    print(i)


