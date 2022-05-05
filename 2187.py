test_num = 1
while True:
    n = int(input())
    quantities = [50, 10, 5,1] 
    bits = [0] * 4

    if n == 0:
        break
    i = 0
    while i < len(quantities):
        
        if n >= quantities[i]:
            n = n - quantities[i]
            bits[i] = bits[i] + 1
        else:
            i += 1
    print("Teste", test_num)
    print(" ".join(str(b) for b in bits))
    print()
    test_num += 1
            
        



