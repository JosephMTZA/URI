while True:
    try:
        n,m = list(map(int, input().split()))
        print(n ^ m)
    except:
        break
