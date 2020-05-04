s =int(1)
so = 0
def fibonacci(s:int)->int:
    if(s==1):
        s = s+1
        return s
    if(s==2):
        s = fibonacci(s-1)+s
        return s
    else:
        s = fibonacci(s-1) + fibonacci(s-2)
while(s<4000000):
    s = fibonacci(s)
    if(s%2==0):
        so=so+s
print(so)

    

