def insertionSort(arr):
  
    for i in range(1, len(arr)):
  
        key = arr[i]
        j = i-1
        while j >=0 and len(key) > len(arr[j]) :
                arr[j+1] = arr[j]
                j -= 1
        arr[j+1] = key
n = int(input())

for i in range(n):
  arr = list(map(str, input().split()))
  insertionSort(arr)
  print(*arr)
