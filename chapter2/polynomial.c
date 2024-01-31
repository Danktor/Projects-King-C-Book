#include<stdio.h>

int main(void){
	int x,val;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	val = 3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-1*(x*x)+7*(x)-6;
	printf("The polynomial 3(x^5)+2(x^4)-5(x^3)-1(x^2)+7(x)-6 evaluated in %d is: %d\n",x,val);
	return 0;
}
