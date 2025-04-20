i, j = 0, 1
x = 11
    
while x > 0:
    if i == 0 or i == 1.0 or i == 2.0:
        for n in range(3):
            print(f'I={i:.0f} J={j:.0f}')
            j += 1

        i = round(i + 0.2, 1)
        j = float(j + 0.2)
        j -= 3
    else:
        for n in range(3):
            print(f'I={i:.1f} J={j:.1f}')
            j += 1

        i = round(i + 0.2, 1)
        j = float(j + 0.2)
        j -= 3

    x -= 1