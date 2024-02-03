#include<stdio.h>

int main(void){
	int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,total;
	printf("Enter the digits: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12);
	
	total = (-1*(i1+i3+i5+i7+i9+i11+3*(i2+i4+i6+i8+i10+i12)-1)%10)+9;
	printf("Check digit: %d\n",total);

	return 0;
}
