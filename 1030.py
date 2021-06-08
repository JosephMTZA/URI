nc = int(input())
while (nc < 1 or nc > 30):
	nc = int(input())


for i in range(0, nc):
	nums = []
	n, k = map(int, input().split())
	while (n < 1 or n > 10000 or k < 1 or k > 1000):
		n, k = map(int, input().split())

	for i in range(0, n):
		nums.append(1)
	temp = k-1
	j = 0
	while (j - len(nums) != 1):
		if (temp > len(nums)):
			temp -= len(nums)
			if (nums[temp] == 0):
				continue
		else:
			nums[temp] = 0
			temp += k
			j += 1
	index = 0
	for i in range(0, nc):
		if (nums[i] == 1):
			index = nums[i]
			break
	print(index)


	