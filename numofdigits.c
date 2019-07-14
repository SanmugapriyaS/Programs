#include <stdio.h>

//program to count the number of digits of an integer

int main(void) 
{
	int num,count=0;

	scanf("%d",&num);

	while(num)
	
        {
		
	num=num/10;
	count++;

	}
	
	printf("%d",count);

	return 0;

}
