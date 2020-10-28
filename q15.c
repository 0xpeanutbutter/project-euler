#include <stdio.h>
#include <stdlib.h>

long unsigned count_path(int size){
    //This uses the concept of Dynamic Programming
    
    long unsigned **mat = (long unsigned**) malloc((size+1)*sizeof(long unsigned*));

    for(int i=0; i<=size; ++i) {
        mat[i] = (long unsigned*) malloc((size+1)*sizeof(long unsigned));
    }

    //Since the no of possible ways of reaching bottom right corner
    //from rightmost and bottommost points are 1 we set bottommost 
    //and rightmost cells of matrix to 1
    for(int i=0; i<=size; ++i){
        mat[size][i] = 1;
        mat[i][size] = 1;
    }

    //Now we move from penultimate bottom right corner towards left and then up
    //No. of possible way of reaching bottommost point from current cell is calculated as
    //the sum of  no. of ways from its right cell and no of ways from its down cell
    for(int i=size-1; i>=0; --i){
        for(int j=size-1; j>=0; --j){
            mat[i][j] = mat[i+1][j] + mat[i][j+1];
        }
    }
    return mat[0][0];
}

int main(){
    int size = 20;
    //scanf("%d",&size);
    printf("No. of routes throgh a %dx%d grid = %lu\n", size, size, count_path(size));
}