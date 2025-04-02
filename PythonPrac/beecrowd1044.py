mult1, mult2 = map(int, input().split())
print('Sao Multiplos') if mult1 % mult2 == 0 or mult2 % mult1 == 0 else print('Nao sao Multiplos')