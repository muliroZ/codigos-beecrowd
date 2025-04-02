salario = float(input())

if salario <= 400:
    print(f'Novo salario: {salario + salario * 0.15:.2f}')
    print(f'Reajuste ganho: {salario * 0.15:.2f}')
    print(f'Em percentual: 15 %')
elif salario > 400 and salario <= 800:
    print(f'Novo salario: {salario + salario * 0.12:.2f}')
    print(f'Reajuste ganho: {salario * 0.12:.2f}')
    print(f'Em percentual: 12 %')
elif salario > 800 and salario <= 1200:
    print(f'Novo salario: {salario + salario * 0.1:.2f}')
    print(f'Reajuste ganho: {salario * 0.1:.2f}')
    print(f'Em percentual: 10 %')
elif salario > 1200 and salario <= 2000:
    print(f'Novo salario: {salario + salario * 0.07:.2f}')
    print(f'Reajuste ganho: {salario * 0.07:.2f}')
    print(f'Em percentual: 7 %')
else:
    print(f'Novo salario: {salario + salario * 0.04:.2f}')
    print(f'Reajuste ganho: {salario * 0.04:.2f}')
    print(f'Em percentual: 4 %')