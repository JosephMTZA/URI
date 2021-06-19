n = int(input())
for i in range(n):
    s = input()
    l = len(s)
    s1 = s[0:int(l/2)]
    s2 = s[int(l/2):int(l/2*2)]
    ulti = ""
    #print(s1)
    #print(s2)
    for i in reversed(s1):
        ulti += i
    for i in reversed(s2):
        ulti += i
    print(ulti) 