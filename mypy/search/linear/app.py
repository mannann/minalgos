
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

def LinearSearch(arr, num):
    for i in range(len(arr)):
        if(arr[i] == num):
            return i
        


if __name__ == '__main__':
    arr = [10, 3, 2, 4, 3, 5, 7, 6, 9, 8]
    BubbleSort(arr)
    DisplayArray(arr)
    res = LinearSearch(arr, 9)
    print(res)