from itertools import permutations as perm 

a = [i for i in range(10)]
x = list(perm(a))
print(x[1000000-1],type(x[1000000-1]))
print("".join(map(str,x[1000000-1])))