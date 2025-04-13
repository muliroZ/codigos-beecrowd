valores = input().split()
valores = list(map(float, valores))

valores.sort(reverse=True)
a, b, c = valores

# Também pode-se utilizar: a, b, c = sorted(valores)[::-1]

seguimos = True

if a >= b + c:
    print('NAO FORMA TRIANGULO')
    seguimos = False
if a**2 == (b**2 + c**2) and seguimos:
    print('TRIANGULO RETANGULO')
if a**2 > (b**2 + c**2) and seguimos:
    print('TRIANGULO OBTUSANGULO')
if a**2 < (b**2 + c**2) and seguimos:
    print('TRIANGULO ACUTANGULO')
if (a == b and b == c) and seguimos:
    print('TRIANGULO EQUILATERO')
if (a == b or b == c) and not (a == b and b == c) and seguimos:
    print('TRIANGULO ISOSCELES')