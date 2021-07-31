def count_collatz(n):
    count = 1
    while(n!=1):
        #print(n,end=" ")
        if(n%2==0):
            n=int(n/2)
        else:
            n = 3*n + 1
        count += 1
    #print(1)
    #print(count)
    return count

max_count = 0
n = 1
for i in range(1,1000000):
    count = count_collatz(i)
    if(count>max_count):
        max_count = count
        n = i
        print(f"No: {i}\tLength: {count}")
print(f"No under 1000000 that produces longest Collatz chain: {n}\tChain_length: {max_count}")