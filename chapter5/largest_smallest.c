#include<stdio.h>

int main(void){
	int d1,d2,d3,d4,largest,smallest;
	printf("Enter four integers: ");
	scanf("%d%d%d%d",&d1,&d2,&d3,&d4);
	largest = d1;
	smallest = d1;
	if(d2>largest){
		largest = d2;
		smallest = d1;
	}
	else{
		smallest = d2;
	}
	if(d3>largest){
		largest = d3;
	}
	else if(d3<smallest){
		smallest = d3;
	}
	if(d4>largest){
		largest = d4;
	}
	else if(d4<smallest){
		smallest = d4;
	}
	printf("Largest: %d\n",largest);
	printf("Smallest: %d\n",smallest);
	return 0;
}
