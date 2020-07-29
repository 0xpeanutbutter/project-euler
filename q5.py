#question is finding the lcm of first n natural numbers
import math #for gcd

def out(n): 
	temp = 1	
	for i in range(1, n + 1): 
		temp = (temp*i)//(math.gcd(temp, i))		 
	return temp 

if(out(10)==2520):
    print(out(20))

