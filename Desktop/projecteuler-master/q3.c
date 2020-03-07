#include<stdio.h>
/*long double find(long double k)
{	long double result;
	for(long double i=0;i<=k,i++)			//recursion is a bad idea
		if(!k%i)
			result = i;
	return i;
}*/
int main()						//logic creds : hemanthkumar17
{
	long int la;
	long long int r = 600851475143;
	for(long long int i=2;i<=r;i++)
	{
		if(r%i==0)
		{
			r/=i;
			la = i;
			i = 2;
		}
	}
	printf("%ld",la);
	return 0;
}
	
	


