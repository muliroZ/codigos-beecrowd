import math

a, b, c = map(float, input().split())

if a == 0:
    print('Impossivel calcular')
else:
    delta = b**2 - 4 * a * c
    if delta < 0:
        print('Impossivel calcular')
    else:
        R1 = ((-b + math.sqrt(delta))/(2 * a))
        R2 = ((-b - math.sqrt(delta))/(2 * a))

        print(f'R1 = {R1:.5f}')
        print(f'R2 = {R2:.5f}')