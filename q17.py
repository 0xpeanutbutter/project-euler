lens = {
    0 : 0 ,
    1 : 3 ,
    2 : 3 ,
    3 : 5 ,
    4 : 4 ,
    5 : 4 , 
    6 : 3 ,
    7 : 5 ,
    8 : 5 ,
    9 : 4 ,
    10 : 3 ,
    20 : 6 ,
    30 : 6 ,
    40 : 5 ,
    50 : 5 ,
    60 : 5 ,
    70 : 7 ,
    80 : 6 ,
    90 : 6 ,
    11 : 6 ,
    12 : 6 ,
    13 : 8 ,
    14 : 8 ,
    15 : 7 ,
    16 : 7 ,
    17 : 9 ,
    18 : 8 ,
    19 : 8 ,
}

for i in range(1,10) :
    lens[i*100] = lens[i] + 10

ans = 0

for i in range(1,1000) :
    tm = i
    o = tm % 10
    tm = int(tm // 10)
    t = tm % 10
    tm = int(tm // 10)
    h = tm % 10
    if i%100 > 10 and i%100 < 20 :
        # print(h,t,o,lens[i%100] + lens[int(i//100)*100])
        ans += lens[i%100] + lens[int(i//100)*100]
    else :
        # print(h,t,o,lens[h*100]+lens[t*10]+lens[o])
        ans += lens[h*100]+lens[t*10]+lens[o]

ans += 11
print(ans)