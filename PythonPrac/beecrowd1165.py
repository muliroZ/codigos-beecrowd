n = int(input())

for _ in range(n):
    numero = int(input())
    divisores = 0
    for i in range(1, numero+1):
        if numero%i == 0:
            divisores += 1
    
    if divisores == 2:
        print(f'{numero} eh primo')
    else:
        print(f'{numero} nao eh primo')
    