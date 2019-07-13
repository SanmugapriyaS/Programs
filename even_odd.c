#include <stdio.h>

//check whether the number is odd or even
int main(void) {

	int num,temp;

	scanf("%d",&num);

	temp=num%2;

	if(temp==0)

	 printf("Even");

	else if(temp<0)

	 printf("invalid");

	else
	 
         printf("Odd");

	return 0;

}
