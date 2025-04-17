casos = int(input())
for _ in range(casos):
    x, y = map(int, input().split())
    try:
        if y == 0:
            print('divisao impossivel')
        divisao = x/y
        print(round(divisao, 1))
    except: ZeroDivisionError