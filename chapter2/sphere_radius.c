#include<stdio.h>

int main(void){
	
	int r;
	printf("Enter the radius: ");
	scanf("%d",&r);
	int v = (4.0f/3.0f)*3.14*(r*r*r);
	printf("The volume is: %d\n",v);
	return 0;
}
