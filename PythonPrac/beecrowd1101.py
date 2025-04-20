while True:
    soma = 0
    m, n = map(int, input().split())
    if m <= 0 or n <= 0:
        break

    maior = max(m, n)
    menor = min(m, n) 

    for i in range(menor, maior+1):
        print(i, end=' ')
        soma += i
        
    print(f'Sum={soma}')