def DisplaySort(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()
    
def InsertionSort(arr):
    for i in range(1, len(arr)):
        j = i - 1
        x = arr[i]
        while(j >= -1 and arr[j] > x):
            arr[j+1] = arr[j]
            j = j - 1
        arr[j + 1] = x


if __name__ == '__main__':
    arr = [1, 4, 2, 6, 5, 8, 7, 10, 11, 9]
    DisplaySort(arr)
    InsertionSort(arr)
    DisplaySort(arr)