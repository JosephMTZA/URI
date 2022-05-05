def has_duplicates(s):
    for i in s:
        #print(i)
        if s.count(i) > 1:
            #print("Tiene repetidos")
            return True

    return False
                    
while True:
    try:
        N,M = input().split()
        nums = 0
        for s in range(int(N), int(M)+1):
            #print(str(s))
            if not has_duplicates(str(s)):
                nums  += 1
        print(nums)
    except EOFError:
        break
