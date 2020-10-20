import string

alphaDictCaps = {}
alphaDictCaps['"'] = 0
upper = string.ascii_uppercase
for i in range(len(upper)) :
    alphaDictCaps[i + 1] = upper[i]
    alphaDictCaps[upper[i]] = i + 1

def getVal(name) :
    return sum([alphaDictCaps[i] for i in name])

with open("p022_names.txt") as f:
    x = f.readlines()[0].split(',')
    x.sort()
    ans = 0
    for i in range(len(x)) :
        ans += (i+1) * getVal(x[i])

print(ans)