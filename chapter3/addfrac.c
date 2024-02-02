#include<stdio.h>

int main(void){
	int num1,den1,num2,den2,res_num,res_den;
	printf("Type the first fraction: ");
	scanf("%d %*c %d",&num1,&den1);
	printf("Type the second fraction: ");
	scanf("%d %*c %d",&num2,&den2);
	res_num = num1*den2+num2*den1;
	res_den = den1*den2;
	printf("The sum of the fractions is %d/%d\n",res_num,res_den);
	return 0;
	
}
