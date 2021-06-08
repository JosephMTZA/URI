n = int(input())

while (n < 1 or n > 100):
    n=int(input())

for i in range(0,n):
    num = int(input())
    
    while(num < 2 or num > 10000000):
        num = int(input())
    
    for j in range(2,num):
        if (num % j == 0):
            print(num, "nao eh primo")
            break
    else:
        print(num, "eh primo")