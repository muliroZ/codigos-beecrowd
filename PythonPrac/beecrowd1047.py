h1, m1, h2, m2= map(int, input().split())

ht = h2 - h1
if ht < 0:
    ht = 24 + (h2 - h1)

mt = m2 - m1
if mt < 0:
    mt = 60 + (m2 - m1)
    ht -= 1

if h1 == h2 and m1 == m2:
    print('O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)')
else:
    print(f'O JOGO DUROU {ht} HORA(S) E {mt} MINUTO(S)')