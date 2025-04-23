i, j = 1, 7
for n in range(3):
    print(f'I={i} J={j-n}')
    
j += 2
for n in range(3):
    print(f'I={i+2} J={j-n}')
    
j += 2
for n in range(3):
    print(f'I={i+4} J={j-n}')
    
j += 2
for n in range(3):
    print(f'I={i+6} J={j-n}')
    
j += 2
for n in range(3):
    print(f'I={i+8} J={j-n}')
