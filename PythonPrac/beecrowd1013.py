a, b, c = map(int, input().split())

maiorAB = (a+b+abs(a-b))/2
maiorXC = (maiorAB+c+abs(maiorAB-c))/2
maiorXC = int(maiorXC)

print(f"{maiorXC} eh o maior")