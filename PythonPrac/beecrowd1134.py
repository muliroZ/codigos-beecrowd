alc, gas, die = 0, 0, 0

while True:
    n = int(input())

    match n:
        case 1:
            alc += 1
        case 2:
            gas += 1
        case 3:
            die += 1
        case 4:
            break
print('MUITO OBRIGADO')
print(f'Alcool: {alc}')
print(f'Gasolina: {gas}')
print(f'Diesel: {die}')