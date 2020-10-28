#include <iostream>
using namespace std;

int count_collatz(unsigned num){
    unsigned long n = num;
    int count = 1;
    while(n!=1){
        n = (n%2==0)? n/2: 3*n +1;
        count += 1;
    }
    return count;
}

int main(){

    int max_count = 0;
    unsigned n = 0;
    for(unsigned i=1; i<1000000; ++i){

        int count = count_collatz(i);
        if(count > max_count){
            max_count = count;
            n = i;
            cout<<"No: "<<i<<"\tLength: "<<count<<"\n";
        }
    }
    cout<<"No under 1000000 that produces longest Collatz chain: "<<n<<"\tChain_length: "<<max_count<<"\n";
}
