n = int(input())
arr = list(map(int, input().split()))
mas = max(arr)
second_max = 0
for i in arr:
    if i < mas:
        if second_max == 0:
            second_max = i
        elif second_max < i:
            second_max = i
print(second_max)