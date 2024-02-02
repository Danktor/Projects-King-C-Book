#include<stdio.h>

int main(void){
	int n;
	printf("Enter a two digits number: ");
	scanf("%d",&n);
	printf("The reverse number is: %d%d\n",n%10,n/10);
	return 0;
}
