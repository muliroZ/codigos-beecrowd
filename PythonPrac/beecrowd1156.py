S, n = 0, 1
for i in range(1, 40, 2):
    S += i/n
    n *= 2
print(f'{S:.2f}')