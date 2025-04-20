x = int(input())
y = int(input())

maior = max(x, y)
menor = min(x, y)

soma = 0
for i in range(menor, maior+1):
    if i % 13 != 0:
        soma += i

print(soma)