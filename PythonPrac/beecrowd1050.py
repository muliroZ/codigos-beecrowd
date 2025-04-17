n = int(input())

DDD = {11: 'Sao Paulo', 19: 'Campinas',
       21: 'Rio de Janeiro', 27: 'Vitoria',
       31: 'Belo Horizonte', 32: 'Juiz de Fora',
       61: 'Brasilia', 71: 'Salvador'}

print(DDD.get(n)) if n in DDD.keys() else print('DDD nao cadastrado')

# Pode ser escrito como:
# if n in DDD.keys():
#   print(DDD.get(n))
# else:
#   print('DDD nao cadastrado')
