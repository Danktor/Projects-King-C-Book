#include<stdio.h>

int main(void){
	int n;
	printf("Enter a three digits number: ");
	scanf("%d",&n);
	printf("The reverse number is: %d%d%d\n",n%10,((n-n%10)/10)%10,((n-n%10)/10)/10);
	return 0;
}
