#include <stdio.h>



//program to find the sum of n natural numbers

int main(void) 
{
	int n,sum=0,count=1;

    
	scanf("%d",&n);

	while(n>0)

	{
	
	sum=sum+count;

	count++;
	
	n--;

	}

	printf("%d",sum);

	return 0;

}
