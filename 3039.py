n = int(input())
contador_h = 0
contador_m = 0



while (n < 1 or n > 1000):
    n = int(input())


for i in range (0,n):
    nombre, sexo = map(str, input().split())

    if (sexo == "M"):
        contador_h += 1
    elif (sexo == "F"):
        contador_m += 1

print(contador_h, "carrinhos")
print(contador_m, "bonecas")