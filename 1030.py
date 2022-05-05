def remainder(n,k):
    res = 0
    for i in range(2, n+1):
        res = (res + k) % i
    return res

nc = int(input())

for i in range(nc):
    n, k = map(int, input().split())
    print(f"Case {i+1}: {remainder(n,k)+1}")

