#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 1000;
	for(int a=1;a<n;a++){
		for(int b=1;b<n-a;b++){
			int c = 1000 - (a+b) ;
				if((a*a)+(b*b)==(c*c)){
						printf("%d\n",a*b*c);
//						printf("%d\n%d\n%d\n",a,b,c);
			}
		}
	}
	return 0;
}
