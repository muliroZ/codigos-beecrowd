n = int(input())

for _ in range(1, n+1):
    numero = input()

    leds = 0
    for uni in numero:
        if uni == '1':
            leds += 2
        elif uni == '2' or uni == '3' or uni == '5':
            leds += 5
        elif uni == '4':
            leds += 4
        elif uni == '6' or uni == '9' or uni == '0':
            leds += 6
        elif uni == '7':
            leds += 3
        elif uni == '8':
            leds += 7
    
    print(f'{leds} leds')