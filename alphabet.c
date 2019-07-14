#include <stdio.h>

//Check whether a character is alphabet or not

int main(void) 
{
	
	
	int vowels[]={'a','e','i','o','u'};

	char ch;

	int flag=1;

	scanf("%c",&ch);


	if((ch>=65 && ch<=90) || ch>=97 && ch<=122)
	
	 printf("Alphabet");
	
	else
	
	 printf("No");
	
	return 0;

}
