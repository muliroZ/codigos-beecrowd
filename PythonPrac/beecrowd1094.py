casos = int(input())
qtd, coelhos, ratos, sapos = 0, 0, 0, 0

for _ in range(casos):
    num, tipo = input().split()
    str(tipo)
    qtd += int(num)

    if tipo == 'C':
        coelhos += int(num)
    elif tipo == 'R':
        ratos += int(num)
    elif tipo == 'S':
        sapos += int(num)

print(f'Total: {qtd} cobaias')
print(f'Total de coelhos: {coelhos}')
print(f'Total de ratos: {ratos}')
print(f'Total de sapos: {sapos}')
print(f'Percentual de coelhos: {coelhos*100/qtd:.2f} %')
print(f'Percentual de ratos: {ratos*100/qtd:.2f} %')
print(f'Percentual de sapos: {sapos*100/qtd:.2f} %')