dentro = 0
fora = 0

casos = int(input())

for _ in range(casos):
    x = int(input())
    if 9 < x < 21:
        dentro += 1
    else:
        fora += 1

print(f'{dentro} in\n{fora} out')