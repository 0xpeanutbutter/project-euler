t_1 = 0 
t_2 = 1

t = t_1 + t_2 

ans = 0

while t <= 4000000 :
    if t%2 == 0 :
        ans += t
    t_1 = t_2 
    t_2 = t 
    t = t_1 + t_2 

print(ans)