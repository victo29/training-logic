arr = []
N = int(input())

for _ in range(N):
    option = input().split()
    if "insert" in option:
        cont = 0
        x = 0
        y = 0
        for i in option:
            if i.isdigit() and cont == 0:
                x = int(i)
                cont += 1
            elif i.isdigit() and cont == 1:
                y = int(i)
        arr.insert(x,y)
    elif "print" in option:
        print(arr)
    elif "remove" in option:
        index = 0
        x = 0
        for i in option:
            if i.isdigit():
                x = int(i)
                
        arr.remove(x)
    elif "append" in option:
        x = 0
        for i in option:
            if i.isdigit():
                x = int(i)
        arr.append(x)
    elif "pop" in option:
        arr.pop()
    elif "sort" in option:
        arr.sort()
    elif "reverse" in option:
        arr.reverse()