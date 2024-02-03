#include<stdio.h>

int main(void){	
	int n,digits;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n<=9){
		digits = 1;
	}
	else if (n<=99){
		digits = 2;
	}
	else if(n<=999){
		digits = 3;
	}
	else if(n<=9999){
		digits = 4;
	}
	else{
		printf("The number is too long\n");
		return 0;
	}
	printf("The number has %d digits\n",digits);
	return 0;
}
