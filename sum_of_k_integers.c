#include <stdio.h>

#include<malloc.h>


//program to find the sum of k integers in an array

int main(void) 
{
	
	int n,k,itr,sum=0;

        int *arr;

	scanf("%d%d",&n,&k);

	arr=(int *)(malloc(sizeof(int)*n));

	for(itr=0;itr<n;itr++)

	 scanf("%d",&arr[itr]);

	for(itr=0;itr<k;itr++)
	 
 	 sum=sum+arr[itr];

	printf("%d",sum);

	return 0;

}