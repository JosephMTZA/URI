def euclides(f1, f2):
    if (f1 % f2 == 0):
        return f2
    else:
        return euclides(f2, f1 % f2)

n = int(input())
for i in range(n):
    lista = list(map(str,input().strip().split(" ")))
    N1 = int(lista[0])
    D1 = int(lista[2])
    operador = lista[3]
    N2 = int(lista[4])
    D2 = int(lista[6])

    if (operador == '+'):
        N1 = (N1 * D2)
        N2 = (D1 * N2)
        Nf = (N1 + N2)
        Df = (D1 * D2)
        mcm = euclides(Nf, Df)
        N = int(Nf/mcm)
        D = int(Df/mcm)
        print(f'{Nf:d}/{Df:d} = {N:d}/{D:d}')
    elif(operador == '-'):
        N1 = (N1 * D2)
        N2 = (D1 * N2)
        Nf = (N1 - N2)
        Df = (D1 * D2)
        mcm = euclides(Nf, Df)
        N = int(Nf/mcm)
        D = int(Df/mcm)
        print(f'{Nf:d}/{Df:d} = {N:d}/{D:d}')
    elif(operador == '*'):
        Nf = (N1 * N2)
        Df = (D1 * D2)
        mcm = euclides(Nf, Df)
        N = int(Nf/mcm)
        D = int(Df/mcm)
        print(f'{Nf:d}/{Df:d} = {N:d}/{D:d}')
    elif(operador == '/'):
        Nf = (N1 * D2)
        Df = (N2 * D1)
        mcm = euclides(Nf, Df)
        N = int(Nf/mcm)
        D = int(Df/mcm)
        print(f'{Nf:d}/{Df:d} = {N:d}/{D:d}')



    

