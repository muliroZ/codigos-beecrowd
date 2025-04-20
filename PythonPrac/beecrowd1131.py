grenais = 0
inter = 0
gremio = 0
empates = 0

while True:
    i, g = map(int, input().split())
    grenais += 1

    if i > g:
        inter += 1
    elif g > i:
        gremio += 1
    else: empates += 1

    print('Novo grenal (1-sim 2-nao)')
    opt = int(input())
    if opt == 1: continue
    else: break

print(f'{grenais} grenais\nInter:{inter}\nGremio:{gremio}\nEmpates:{empates}')

if inter > gremio:
    print('Inter venceu mais')
elif gremio > inter:
    print('Gremio venceu mais')
else:
    print('Nao houve vencedor')