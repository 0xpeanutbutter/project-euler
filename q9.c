#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 1000;
	for(int a=1;a<n;a++){
		for(int b=a;b<n;b++){
			for(int c=b;c<n;c++){
				if((a*a)+(b*b)==(c*c)){
					if(a+b+c==1000){
						printf("%d\n",a*b*c);
//						printf("%d\n%d\n%d\n",a,b,c);
					}
				}
			}
		}
	}
	return 0;
}
