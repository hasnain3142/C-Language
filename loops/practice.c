#include <stdio.h>
void cough(int n);
int main(void) {
int i = 0;
while (i<5) {
	printf("%d",i);
	i++;
}
printf("\n");
for(int i = 0; i<3;i++){
	printf("Hi, World!\n");
}
cough(3);
}
void cough(int n) {
	for (int i = 0; i<n; i++) {
	printf("Hello, World!\n");
};
}
