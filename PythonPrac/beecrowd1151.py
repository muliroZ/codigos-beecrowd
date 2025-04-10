n = int(input())

a, b = 0, 1

while n > 0:
    if n == 1:
        print(a)
        break
    print(a, end=' ')
    a, b = b, a+b
    n-=1
