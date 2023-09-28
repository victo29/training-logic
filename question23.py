import random

list_size = int(input("Digite o tamnaho da lista: "))
limit_value = int(input("Digite o valor maximo da lista: "))

list_a = []
divisible_by_three = []

for i in range(list_size):
    list_a.append(random.randrange(limit_value+1))
                
soma =  sum(list_a)
max_value = max(list_a)
min_value = min(list_a)
reverse_list = list(reversed(list_a))


for i in list_a:
    if i % 3 == 0:
        divisible_by_three.append(i)

Prime_numbers = []
for i in list_a:
    if i == 0:
        continue
    p=0
    for y in range(1,i):
        if i % y == 0:
            p += 1
    if p < 2:
        Prime_numbers.append(i)

if len(Prime_numbers) > 0:
    min_value_prime = min(Prime_numbers)
    fatorial = 1
    resultado = 1
    while(fatorial <= min_value_prime):
        resultado *= fatorial
        fatorial += 1  
    min_value_prime = resultado
else:
    min_value_prime = "Não há números primos"

print(f"A soma dos elementos da lista é {soma}")
print(f"O maior elemento da lista é {max_value} e o menor é {min_value}")
print(f"A lista em odem reversa: {reverse_list}")
print(f"Os números divisiveis por 3: {divisible_by_three}")
print(f"Fatorial do menor número primo(se houver): {min_value_prime}")