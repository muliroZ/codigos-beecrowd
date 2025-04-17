casos = int(input())

for _ in range(casos):
    x, y = map(int, input().split())
    soma = 0
    maior = max(x, y)
    menor = min(x, y)

    for n in range(menor + 1, maior):
        if n % 2 != 0:
            soma += n
    print(soma)