x = int(input())
contador = 1

while x > 0:
    numero = contador
    if numero % 2 != 0:
        print(numero)
    contador += 1
    x -= 1