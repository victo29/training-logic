def solve(s):
    length = len(s)
    name = ""
    prox = 0
    for i in range(length):
        if i == 0:
            name += s[i].upper()
            continue
        if s[i] == " ":
            prox = i+1
        elif i == prox:
            name += s[i].upper()
            continue
        name += s[i]
    print(name)



s = input()

result = solve(s)

   
