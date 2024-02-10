#include<stdio.h>
#include<stdbool.h>

#define N 8

int main(void){	
	int digits[N];
	int times[10] = {0};	
	printf("Enter a %d digit number: ",N);
	for(int i=0;i<N;i++){
		scanf("%1d",&digits[i]);
		times[digits[i]]++;
	}
	printf("Digit: ");
	for(int i=0;i<10;i++){
		printf("%d	",i);
	}
	printf("\nOccurrences: ");
	for(int i=0;i<10;i++){
		printf("%d	",times[i]);	
	}
	printf("\n");

	
	return 0;
}
