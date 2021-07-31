
def d(n):
    if(n==1):
        return 0
    sum = 1
    i=2
    while(i <= n/i):
        if(n%i==0):
            sum += i
            if(n/i != i):
                sum += int(n/i)
        i+=1
    return sum

limit = 10000
d_vals = [-1] * limit
sum = 0
d_vals[0] = 0
print("Amicable Pairs :")
for i in range(2,limit):
    if(d_vals[i-1]==-1):
        d_vals[i-1] = d(i)
    if(d_vals[i-1]<limit):
        if(d_vals[d_vals[i-1] -1] == -1):
            d_vals[d_vals[i-1] -1] = d(d_vals[i-1])
        if(i == d_vals[d_vals[i-1]-1] and i!=d_vals[i-1]):
            sum += d_vals[i-1]
            print(f"{i} {d_vals[i-1]}")

print(f"Sum of all amicable nos under {limit} = {sum}")
