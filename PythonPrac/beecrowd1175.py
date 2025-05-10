lista = []
for _ in range(20):
    n = int(input())
    lista.append(n)

lista_reverse = lista[::-1]
for i in lista_reverse[:]:
    print(f"N[{lista_reverse.index(i)}] = {i}")