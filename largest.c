#include <stdio.h>

//find the largest number among three numbers entered by user

int main(void) 
{
	int a,b,c,temp;

	scanf("%d%d%d",&a,&b,&c);
   
        temp= (a>b)?a:b;
  
        printf("%d",(temp>c)?temp:c);

	return 0;

}
