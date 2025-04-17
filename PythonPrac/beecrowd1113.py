while True:
    x, y = map(int, input().split())
    if x == y:
        break
    print('Crescente') if y > x else print('Decrescente')