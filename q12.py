from math import sqrt
n = 500

def getNumFactors(x) :
    ans = 0
    sq = sqrt(x)
    r = int(sq // 1 + 1)

    for i in range(1,r) :
        if not x%i :
            if i == sq :
                ans += 1
            else:
                ans += 2
    return ans 

while 1 :
    num = (n*(n+1)) // 2
    f = getNumFactors(num)
    if f >= 500 :
        print(num,f)
        break
    n += 1