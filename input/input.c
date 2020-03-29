#include <stdio.h>

int main(void){
	int num;
	float dec;
	char ch;

	printf("Welcome\n");

	printf("Enter any number: ");
	scanf("%d",&num);
	printf("%d\n",num);

	printf("Enter any character: ");
	scanf("%c",&ch);

	printf("Enter any floating-pint number: ");
	scanf("%f",&dec);
	printf("%f\n",dec);
	char str[50];
	printf("Enter a word: ");
	scanf("%s",str);
	printf("%s\n",str);

	// Input the Sentence 
    printf("\n\nEnter the Sentence: "); 
    scanf("%s[^\n]\ns", str); 
  
    // Output the String 
    printf("\nEntered Sentence is: %s", str); 
  
	
}
