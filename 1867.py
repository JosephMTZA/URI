def sum_number(num):
    while len(num) > 1:
        temp = 0
        for i in num:
            temp += int(i)
        num = str(temp)
       
    return num

        

while True:
    N,M = input().split()
    if (N == "0" and M == "0"):
        break
    a = sum_number(N)
    b = sum_number(M)

    if a > b:
        print(1)
    elif a < b:
        print(2)
    elif a == b:
        print(0)



