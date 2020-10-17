import time
from math import sqrt

def divisors(n):
    divs = {1,n}
    for i in range(2,int(sqrt(n))+1):
        if n%i == 0:
            divs.update((i,n//i))
    return divs

s = time.time()
for i in range(1000000):
    triangle = int((i*(i+1))/2)
    divs = divisors(triangle)
    if len(divs)>500:
        print(triangle)
        break

print(time.time()-s) # prints the execution time