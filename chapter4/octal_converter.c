#include<stdio.h>

int main(void){
	int n,d1,d2,d3,d4,d5;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d",&n);
	d1 = n%8;
	n = n/8;
	d2 = n%8;
	n = n/8;
	d3 = n%8;
	n = n/8;
	d4 = n%8;
	n = n/8;
	d5 = n%8;
	printf("In octal, your number is : %d%d%d%d%d\n",d5,d4,d3,d2,d1);

	return 0;
}
