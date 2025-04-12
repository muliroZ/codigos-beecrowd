x, y, z = map(int, input().split())
numeros = [x, y, z]
numeros.sort()

for numero in numeros[:]:
    print(numero)

print (f'\n{x}\n{y}\n{z}')