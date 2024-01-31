#include<stdio.h>

int main(void){
	float amount;
	printf("Enter a dollars and cent amount: ");
	scanf("%f",&amount);
	printf("The amount with tax added is: %.2f\n",amount+amount*0.05);
	return 0;
}
