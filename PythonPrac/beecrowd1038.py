x, y = map(int, input().split())

if x == 1:
    preco = 4.00
    print(f'Total: R$ {preco*y:.2f}')
elif x == 2:
    preco = 4.50
    print(f'Total: R$ {preco*y:.2f}')
elif x == 3:
    preco = 5.00
    print(f'Total: R$ {preco*y:.2f}')
elif x == 4:
    preco = 2.00
    print(f'Total: R$ {preco*y:.2f}')
elif x == 5:
    preco = 1.50
    print(f'Total: R$ {preco*y:.2f}')
