#include <stdio.h>
float average(int length, int array[]);
int main(void) {
    int n;
    printf("Enter number of scores: ");
    scanf("%d",&n);
    int scores[n];
    for (int i=0; i<n; i++) {
        int x;
        printf("Score %d: ",i+1);
        scanf("%d",&x);
        scores[i] = x;
    }
    printf("Average: %.2f\n",average(n,scores));
}

float average(int length, int array[]) {
    int sum = 0;
    for (int i=0;i<length;i++) {
        sum += array[i];
    }
    return (float) sum / (float) length;
}