arr = [1, 3, 2, 4, 3, 5, 7, 6, 9, 8]

def BubbleSort(arr):
    for i in range(len(arr) - 1):
        for j in range(len(arr) - i -1):
            if(arr[j] > arr[j+1]):
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp

def DisplayArray(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()

DisplayArray(arr)
BubbleSort(arr)
DisplayArray(arr)