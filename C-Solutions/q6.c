#include <stdio.h>

void main() {
    int jsum , sumsq ;
    jsum = sumsq = 0 ;
    for (int i = 1 ; i <= 100 ; i++) {
        jsum += i ;
        sumsq += i * i ;
    }
    int result = jsum * jsum - sumsq ;
    printf("%d\n", result) ;
}