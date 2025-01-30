#include<stdio.h>
  /* Write a program to determine whether a character entered by the user is 
lowercase or not.*/
int main()
{
	char ch;
	printf("\t ALPHABET CASE DETECTOR \n");
	printf("\nEnter the Alphabet: ");
	scanf("%c", &ch);
	if(ch >= 'A' && ch<= 'Z'){
		printf("The charcter %c is upper case \n ", ch);
		printf("The charcter ascii value is %d \n ", ch);
	} else	if(ch >= 'a' && ch<='z'){
		printf("The charcter %c is lower case \n ", ch);
		printf("The charcter ascii value is %d \n", ch);
	} else{
		printf("Please Enter A Valid Alphabet");
	}	
	return 0;
}
