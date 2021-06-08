c = int(input())
for i in range(0, c):
	n, m = map(int, input().split())
	while (n < 1 or n > 100 or m < 1 or m > 100):
		n, m = map(int, input().split())
	
	num = n ** m
	num_string = str(num)
	print(len(num_string))