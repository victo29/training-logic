n = int(input())
student_marks = {}
for _ in range(n):
    name, *line = input().split()
    scores = list(map(float, line))
    student_marks[name] = scores
query_name = input()

cont = 0
for chave, valor in student_marks.items():
    if query_name == chave:
        qtd_elements = len(valor)
        media = sum(valor) / qtd_elements

print("%.2f" % (media ))