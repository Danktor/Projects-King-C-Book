#include<stdio.h>

int main(void){
	int n;
	printf("Enter a integer number: ");
	scanf("%d",&n);
	for(int i=2;i*i<=n;i=i+2){
		printf("%d\n",i*i);
	}
	return 0;
}
