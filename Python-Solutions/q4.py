#palindrome lies between 10000 and 998001
def palindrome(s):
    rev = 0
    i = s
    while(i!=0):
        rev = rev*10+i%10
        i/=10
    if(rev == s):
        return 1
    else:
        return 0

def multiple(n):
    return [x for x in range(100, 1000) if n % x == 0]

for i in range(10000,998002):
    if(palindrome(i)):
        for j in multiple(i):
            if((i/j)<1000 and (i/j)>=99):
                print(i)
        

#print(multiple(4))
#print(palindrome(10001))
    
