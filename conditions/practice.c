#include <stdio.h>
int main(void) {
int x = 5;
int y = 10;

if (x<y) {
	printf("x is less than y\n");
}
else if (x>y){
	printf("x is greater than y\n");
}
else {
	printf("x is equal to y\n");
}

int n;
printf("Enter a number: ");
scanf("%d",&n);
if (n%2==0) {
	printf("You entered an even number.\n");
}
else {
	printf("You entered an odd number.\n");
}


}
