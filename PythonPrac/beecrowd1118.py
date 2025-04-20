while True:
    while True:
        nota1 = float(input())
        if nota1 < 0 or nota1 > 10:
            print('nota invalida')
        else: break
        
    while True:
        nota2 = float(input())
        if nota2 < 0 or nota2 > 10:
            print('nota invalida')
        else: break

    media = (nota1 + nota2)/2
    print(f'media = {media:.2f}')

    while True:
        print('novo calculo (1-sim 2-nao)')
        opc = int(input())
        if opc == 2 or opc == 1:
            break
        elif opc != 1: continue

    if opc == 2: break