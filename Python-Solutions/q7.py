#found this prime function online from LucianGVx,spain
def is_prime(x):
    if x ==2:
        return True
    if x%2 == 0:
        return False
    if x<9:
        return True
    if x%3 == 0:
        return False

    flag = 5
    n = x**0.5 +1 #search only until this number
    while flag<= n:
        if x%flag == 0 or x%(flag+2) ==0:
            return False
        flag=flag+6
    return True

n = 10001
flag = 1
temp = 1 
while flag < n:
    temp = temp +2 #we will be taking only odd nums to reduce the time
    if is_prime(temp):
        flag = flag + 1

print(temp)
