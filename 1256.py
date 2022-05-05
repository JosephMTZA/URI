def hash_table(m,c,nums):
    table = [[] for _ in range(m)]
    
    for n in nums:
        table[n % m].append(n)
    
    return table

def print_table(table):
    for i, arr in enumerate(table):
        print(f"{i}",end="")
        for j in arr:
            print(f" -> {j}",end="")
        print(" -> \\")

n = int(input())

for i in range(n):
    m, c = list(map(int, input().split()))
    nums = list(map(int, input().split()))
    table = hash_table(m,c,nums)
    print_table(table)
    
    if i != n-1:
        print()

