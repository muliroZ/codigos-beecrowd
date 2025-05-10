linha = int(input())
operacao = input().capitalize()

contagem = 0
soma = 0
media = 0

for i in range(12):
    for j in range(12):
        n = float(input())
        if i == linha:
            soma += n
            contagem += 1
            media = soma/contagem

if operacao.upper() == 'S':
    print(round(soma, 1))
elif operacao.upper() == 'M':
    print(round(media, 1))