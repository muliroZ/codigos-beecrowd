x = input()
y = input()
z = input()

if x == 'vertebrado':
    if y == 'ave':
        if z == 'carnivoro':
            print('aguia')
        elif z == 'onivoro':
            print('pomba')
    elif y == 'mamifero':
        if z == 'onivoro':
            print('homem')
        elif z == 'herbivoro':
            print('vaca')
elif x == 'invertebrado':
    if y == 'inseto':
        if z == 'hematofago':
            print('pulga')
        elif z == 'herbivoro':
            print('lagarta')
    elif y == 'anelideo':
        if z == 'hematofago':
            print('sanguessuga')
        elif z == 'onivoro':
            print('minhoca')