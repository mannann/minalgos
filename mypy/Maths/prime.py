# Prime numbers

def prime_number(n):
    if n == 1:
        return False
    for i in range(2, n):
        if (n % i) == 0:
            return False
    return True

for i in range(21):
    print(i, prime_number(i))

