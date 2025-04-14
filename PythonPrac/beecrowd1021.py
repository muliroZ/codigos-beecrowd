n = float(input())
print("NOTAS:")

print(f"{n//100:.0f} nota(s) de R$ 100.00")
n %= 100
print(f"{n//50:.0f} nota(s) de R$ 50.00")
n %= 50
print(f"{n//20:.0f} nota(s) de R$ 20.00")
n %= 20
print(f"{n//10:.0f} nota(s) de R$ 10.00")
n %= 10
print(f"{n//5:.0f} nota(s) de R$ 5.00")
n %= 5
print(f"{n//2:.0f} nota(s) de R$ 2.00")
n %= 2

print("MOEDAS:")

print(f"{n//1:.0f} moeda(s) de R$ 1.00")
n %= 1
print(f"{n//0.5:.0f} moeda(s) de R$ 0.50")
n %= 0.5
print(f"{n//0.25:.0f} moeda(s) de R$ 0.25")
n %= 0.25
print(f"{n//0.1:.0f} moeda(s) de R$ 0.10")
n %= 0.1
print(f"{n//0.05:.0f} moeda(s) de R$ 0.05")
n %= 0.05
print(f"{n/0.01:.0f} moeda(s) de R$ 0.01")