n = int(input())

if 1 <= n <= 10**4:
    for _ in range(1, n+1):
        linha = input()
        linha_nova = ''

        for char in linha:
            if char.isalpha():
                linha_nova += chr(ord(char) + 3)
            else:
                linha_nova += char

        linha_reversa = linha_nova[::-1]
        corte = len(linha_reversa)//2
        pt1 = linha_reversa[:corte]
        pt2 = ''

        for char in linha_reversa[corte:]:
            pt2 += chr(ord(char) - 1)

        linha_suprema = pt1 + pt2

        print(linha_suprema)