//the palindrome number lies between 10000 and 998001
//so find the number from 998001 which is a palindrome
//find if there is a more efficient way

#include<stdio.h>
#include<stdlib.h>
int palindrome(int i){
	int r;
	int t = i;
	while (t != 0)
  	{
    		r = r * 10;
    		r = r + t%10;
    		t = t/10;
  	}
	if(r==i)
		return 1;
	else
		return 0;
	
}	
int main()
{	int i,count = 0;
	
	for(i=998001;i>10000;i--)
		if(palindrome(i)==1)
		{
			printf("%d",palindrome(i));
			for(int j=999;i>100;i++)
			{
				if(i%j==0)
				{
					printf("%d",i);
					return 0;
				}
				else
					printf("dfg");
			}
		}
	return 1;
}


