a, b, c, d = map(float, input().split())

media = (a*2 + b*3 + c*4 + d)/10
print(f'Media: {media:.1f}')

if media >= 7:
    print('Aluno aprovado.')
elif media < 5:
    print('Aluno reprovado.')
else:
    print('Aluno em exame.')
    exame = float(input())
    print(f'Nota do exame: {exame}')
    media_f = (media + exame)/2
    print(f'Aluno aprovado.\nMedia final: {media_f}') if media_f >= 5 else print(f'Aluno reprovado.\nMedia final: {media_f}')