#include <stdio.h>

//check whether the character is vowel or consonant


int main(void) {


	
int vowels[]={'a','e','i','o','u'};

	char ch;

	int flag=1;

	scanf("%c",&ch);

	for(int i=0;i<5;i++)

	{

		if(ch==vowels[i] || ch==(vowels[i]-32))

		 flag=0;
	
        }
	

 	if(flag==0)

	 printf("Vowel");


	else if((ch>=65 && ch<=90) || ch>=97 && ch<=122)

	 printf("Consonant");

	else

	 printf("invalid");

	return 0;

}
