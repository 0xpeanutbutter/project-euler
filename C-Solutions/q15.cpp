#include <iostream>
#include <vector>
using namespace std;

long unsigned count_path(int size){
    //This uses the concept of Dynamic Programming
    vector<vector<long unsigned>> mat(size+1, vector<long unsigned>(size+1));

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
    //cin>>size;
    cout<<"No. of routes throgh a "<<size<<"x"<<size<<" grid = "<<count_path(size)<<"\n";
}

/*
//Following Code is a recursive one which takes much more time compared to the above one
void count_path(int i, int j, int size, unsigned long &count){
    if(i == size && j== size)
        ++count;
    else if(i == size)
        count_path(i,j+1,size,count);
    else if(j == size)
        count_path(i+1,j,size,count);
    else {
        count_path(i+1,j,size,count);
        count_path(i,j+1,size,count);
    }
}

int main(){
    int size=20;
    //cin>>size;
    unsigned long count = 0;
    int i = 0, j = 0;
    count_path(i,j,size,count);
    cout<<count<<"\n";
}
*/