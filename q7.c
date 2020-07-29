#include<stdio.h>

int main()
{
	int n =10001,count =1,prime=2;
	while(count!=n){
		prime++;
		int found = 0;
		for(int j=2;j<prime;j++)
		{
			if(prime%j==0)
			{
				found = 1;
				break;
			}
		}
		if(!found)
			count++;
	}
	printf("%d",prime);
	return 0;
}


