pos = 0
soma = 0

for _ in range(6):
    n = float(input())
    if n > 0:
        soma += n
        pos += 1

print(f'{pos} valores positivos\n{soma/pos:.1f}')