x, y = map(int, input().split())
horas = 24

if x == y:
    print(f'O JOGO DUROU {horas} HORA(S)')
elif x > y:
    horas += y - x
    print(f'O JOGO DUROU {horas} HORA(S)')
elif x < y:
    horas = y - x
    print(f'O JOGO DUROU {horas} HORA(S)')