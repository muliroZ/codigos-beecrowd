par = 0

for _ in range(5):
    n = float(input())
    if n % 2 == 0:
        par += 1

print(f'{par} valores pares')