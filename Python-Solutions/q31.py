def fact(n):
    if n==1 or n==0:
        return 1
    else:
        return n*fact(n-1)

def dig_fact_sum(n):
    global f_arr
    if n<10:
        return -1
    sum = 0
    while(n>0):
        sum += f_arr[n%10]
        n = int(n/10)
    return sum

f_arr = [fact(i) for i in range(10)]

sum = 0
limit = 1000000
print("Curious Nos: ")
for i in range(10,limit):
    if(i == dig_fact_sum(i)):
        print(i)
        sum+=i
print(f"Sum of curious nos upto {limit} = {sum}")
