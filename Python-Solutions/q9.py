flag = False

for i in range(1,1000) :
    for j in range(1,1000-i) :
        k = 1000 - (i+j)
        if i*i + j*j == k*k :
            print(i,j,k)
            print(i*j*k)
            flag = True 
            break
    if flag :
        break
