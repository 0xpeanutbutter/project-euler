#include <stdio.h>

void main() {
    int s = 0 ;
    int i = 0 ;
    for(i=0;i<1000;i+=1){
        if(i%3==0 || i%5==0){
            s+=i;
        }
    }
    printf("%d\n",s);
}