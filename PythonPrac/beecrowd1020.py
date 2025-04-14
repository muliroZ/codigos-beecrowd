age = int(input())

ano = age/365
age %= 365
mes = age/30
age %= 30

ano = int(ano)
mes = int(mes)

print(f"{ano} ano(s)")
print(f"{mes} mes(es)")
print(f"{age} dia(s)")