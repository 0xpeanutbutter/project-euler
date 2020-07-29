#simple math actually
#i ll try using some logic later
sumsq = 0
jsum = 0
for i in range(1,101):
    sumsq = sumsq + i*i
    jsum = jsum+i
result = jsum*jsum - sumsq
print(result)
