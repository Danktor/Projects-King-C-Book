#include<stdio.h>

int main(void){
	int i0,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,digit,total;
	printf("Enter the digits: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
		&i0,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5,&digit);	
	total = (-1*(i1+i3+i5+j2+j4+3*(i0+i2+i4+j1+j3+j5)-1)%10)+9;
	if(total==digit){
		printf("VALID\n");
	}
	else {
		printf("NOT VALID\n");
	}

	return 0;
}
