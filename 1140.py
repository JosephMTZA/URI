while (True):
	cont = 0
	arr = list(map(str, input().split()))
	if "*" in arr:
		break
	for i in range(len(arr)):
		if (arr[i][0].upper() == arr[0][0].upper()):
			cont += 1
	if(len(arr) == cont):
		print("Y")
	else:
		print("N")