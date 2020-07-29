#include<stdio.h>

int calcFib(int *arr)
{
	int i;
	for(i=2;;i++)
	{
		arr[i] = arr[i-1]+arr[i-2];	/*this func idea was suggested by my bud ajay*/
		if(arr[i] >= 4000000)
			break;
	}
	return i;
}
/*long long calsum(int *arr,int n)
{
	long long sum;
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
		if(!arr[i]%2)
			sum+=arr[i];
	}
	return sum;
}*/
void main()
{
	int arr[100000];
	arr[0] = 1;
	arr[1] = 2;
	int i = calcFib(arr);
	long long int sum;
	for(int k=0;k<i;k++)
	{
		printf("%d\n",arr[k]);
	}
	for(int j=0;j<i;j++)
	{
		if(arr[j]%2==0)
		{
			printf("%d\n",arr[j]);
			sum+=arr[j];
		}
	}
	printf("the sum is %lld",sum);
}

