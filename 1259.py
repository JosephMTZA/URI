n = int(input())

pairs = []
not_pairs = []
for i in range(n):
    num = int(input())
    if num & 1 == 0:
        pairs.append(num)
    else:
        not_pairs.append(num)

pairs.sort()
not_pairs.sort(reverse=True)

sorted_nums = []

pairs.extend(not_pairs)

for n in pairs:
    print(n)


