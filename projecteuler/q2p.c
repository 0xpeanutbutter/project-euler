#include<stdio.h>
int fib(int n)
{
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else 
		return fib(n-1)+fib(n-2);
}
int main()
{
	//segmentation fault due to stack overflow i guess
        for(int i = 0;fib(i)<4000000;i++)
	{
//		printf("%d",fib(i));
	}
	return 0;;
}
