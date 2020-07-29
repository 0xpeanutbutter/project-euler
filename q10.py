def is_prime(num):
    if num == 0 or num == 1:
        return False
    if num == 2:
        return True
    else:
        for i in range(3, int(num ** 0.5) + 1, 2):
            if (num % i) == 0:
                return False
    return True

s = 0
#remove all evens from  iterating
for i in range(1,2000000,2):
    if is_prime(i):
#        print(i)
        s+=i
s=s+2 #2 is not counted as prime 
print(s)
