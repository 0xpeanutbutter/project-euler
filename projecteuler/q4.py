def palindrome(int i):
    a=i
    r = 0
    while(a):
        r = r*10 + r/ i 
        r=r/i
    if(r==i):
        return 1
    else :
        return 0
