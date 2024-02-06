#include<stdio.h>

int main(void){
	int num,den,c1,c2;
	printf("Enter a fraction: ");
	scanf("%d%*c%d",&num,&den);
	c1 = num;
	c2 = den;
	for(int i=1;i>0;i++){
		if(c2==0)
			break;
		i = c2;
		c2 = c1%c2;
		c1 = i;
	}
	num = num / c1;
	den = den / c1;
	printf("In lowest terns: %d/%d\n",num,den);

	return 0;
}
