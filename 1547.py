j = 0
comparador = 0

n = int(input())

for i in range(0,n):
    QT, s = map(int, input().split())

    while (QT < 4 or QT > 10):
        QT = int(input())

    while (s < 1 or s > 100):
        s = int(input())

    numeros = list(map(int, input().split(' ')[:QT]))
    minimo = max(numeros)
    for i in numeros:
        if (abs(i-s) < minimo):
            valor = i
            minimo = abs(i-s)
            
    index = numeros.index(valor)
    print(index+1)
    #value = (numeros[min(range(len(numeros)), key = lambda i: abs(numeros[i]-s))])
    #index = numeros.index(value)
    #print(index+1)