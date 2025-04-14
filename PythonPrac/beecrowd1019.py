T = int(input())

h = T/3600
T %= 3600
m = T/60
T %= 60

h = int(h)
m = int(m)
T = int(T)

print(f"{h}:{m}:{T}")