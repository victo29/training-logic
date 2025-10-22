N = int(input())  # Lê o número de casos de teste

for _ in range(N):
    A, B = input().split()  # Lê os valores A e B como strings
    if A.endswith(B):
        print("encaixa")
    else:
        print("nao encaixa")

        
    
   