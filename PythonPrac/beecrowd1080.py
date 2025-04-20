n = []
for _ in range(100):
    n.append(int(input()))

maior = max(n)
posicao = n.index(maior)

print(maior)
print(posicao+1)