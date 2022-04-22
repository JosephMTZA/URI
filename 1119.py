while True:

    n, k, m = input().split()

    n = int(n)
    k = int(k)
    m = int(m)
    
    if (n == 0 and k == 0 and m == 0):
        break

    dole_queue = []

    for i in range(0,n):
        dole_queue.append(i+1)
    
    cindex1 = 0
    cindex2 = len(dole_queue)-1
    salida = ""
    while True:
        cont = 0

        while True:
            if (dole_queue[cindex1] != 0):
                cont += 1
            
            if cont == k:
                break
            cindex1 += 1
            if (cindex1 >= len(dole_queue)):
                cindex1 = 0;
        
        cont = 0
        while True:
            if (dole_queue[cindex2] != 0):
                cont += 1
            
            if cont == m:
                break
            cindex2 -= 1

            if cindex2 < 0:
                cindex2 = len(dole_queue) - 1;
        
            
        first = dole_queue[cindex1]
        second = dole_queue[cindex2]
        
        sep1 = (2 - (len(str(first)) - 1)) * " "
        sep2 = (2 - (len(str(second)) - 1)) * " " 

        if first == second:
            #print("  {}".format(first), end = "")
            salida += (sep1+"{}".format(first))
           
        else:
            #print("  {}  {}".format(first, second), end = "")
            salida += (sep1+"{}{}{}".format(first, sep2, second))
            
        dole_queue[cindex1] = 0
        dole_queue[cindex2] = 0
        while (dole_queue[cindex1] != 0):
            
            cindex1 += 1

            if (cindex1 >= len(dole_queue)):
                cindex1 = 0;

        while (dole_queue[cindex2] != 0):
            
            cindex1 -= 1

            if cindex2 < 0:
                cindex1 = len(dole_queue) - 1;

        if any(dole_queue) == False:
            salto = ""
            salida += salto
            print(salida)
            break
        coma = ","
        salida += coma
        #print(salida, end="")
