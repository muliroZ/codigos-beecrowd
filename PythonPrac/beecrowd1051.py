salario = float(input())

if salario <= 2000:
    print('Isento')
elif salario > 2000 and salario <= 3000:
    taxa1 = (salario - 2000) * 0.08
    print(f'R$ {taxa1:.2f}')
elif salario > 3000 and salario <= 4500:
    tax = salario - 3000
    tax *= 0.18
    taxa2 = tax + (salario - 2000 - (salario - 3000)) * 0.08
    print(f'R$ {taxa2:.2f}')
else:
    s = salario - 2000
    s1 = s - 1000
    tax1 = 1000 * 0.08
    s2 = s1 - 1500
    tax2 = 1500 * 0.18
    taxa3 = tax1 + tax2 + (s2 * 0.28)
    print(f'R$ {taxa3:.2f}')