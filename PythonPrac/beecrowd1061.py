d1 = int(input().split()[1])
h1, m1, s1 = map(int, input().split())
d2 = int(input().split()[1])
h2, m2, s2 = map(int, input().split())

m_seg = 60
h_seg = 3600
d_seg = 86400

inicio = s1 + m1*m_seg + h1*h_seg + d1*d_seg
fim = s2 + m2*m_seg + h2*h_seg + d2*d_seg

if inicio < fim:
    tempo = fim - inicio
    w = tempo//d_seg
    tempo %= d_seg
    x = tempo//h_seg
    tempo %= h_seg
    y = tempo//m_seg
    tempo %= m_seg
    z = tempo

print(f'{w} dia(s)\n{x} hora(s)\n{y} minuto(s)\n{z} segundo(s)')