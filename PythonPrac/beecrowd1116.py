casos = int(input())
for _ in range(casos):
    x, y = map(int, input().split())
    if y != 0:
        divisao = x/y
        print(round(divisao, 1))
    else:
        print('divisao impossivel')