import string
letters = string.ascii_lowercase

t = int(input())

for i in range(t):
    s1, s2 = input().split()
    cont = 0
    for j,k in zip(s1, s2):
        #print(j, k)
        i1 = letters.find(j)
        i2 = letters.find(k)
        
        cont += (i2 - i1) % 26
        #print(i2, i1)

    print(cont)
        


