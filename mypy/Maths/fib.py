# Fibonacci Series

def fibonacci(n):
    num_one = 0
    num_two = 1
    res = 0
    for i in range(n):
        res = num_one + num_two
        num_one = num_two
        num_two = res
        print(res, end=" ")
    print()

fibonacci(10)