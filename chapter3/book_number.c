#include<stdio.h>

int main(void){
	int prefix,id,code,number,digit;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d",&prefix,&id,&code,&number,&digit);
	printf("GS1 prefix: %d\n",prefix);
	printf("Group identifier: %d\n",id);
	printf("Publisher code: %d\n",code);
	printf("Item number: %d\n",number);
	printf("Check digit: %d\n",digit);
	return 0;
}
