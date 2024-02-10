#include<stdio.h>

int main(void){
	int m,n,temp;
	printf("Enter two integers: ");
	scanf("%d %d",&m,&n);
	for(int i=1;i>0;i++){
		if(n==0)
			break;
		temp = n;
		n = m%n;
		m = temp;
	}
	printf("Greatest common divisor: %d\n",m);
	return 0;
}
