numeros = []
n = 5
while n > 0:
    numeros.append(int(input()))
    n -= 1

par = 0
impar = 0
positivo = 0
negativo = 0

for numero in numeros:
    if numero % 2 == 0 and numero > 0:
        par += 1
        positivo += 1
    elif numero % 2 == 0 and numero < 0:
        par += 1
        negativo += 1
    elif numero % 2 != 0 and numero > 0:
        impar += 1
        positivo += 1
    elif numero < 0:
        impar += 1
        negativo += 1
    else: par += 1

print(f'{par} valor(es) par(es)')
print(f'{impar} valor(es) impar(es)')
print(f'{positivo} valor(es) positivo(s)')
print(f'{negativo} valor(es) negativo(s)')