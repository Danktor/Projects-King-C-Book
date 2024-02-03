#include<stdio.h>

int main(void){
	int value;
	float commission;
	printf("Enter value of trade: ");
	scanf("%d",&value);
	if(value < 2500){
		commission = 30+0.017*value;
	}
	else if(value < 6250){
		commission = 56+0.0066*value;
	}
	else if(value < 20000){
		commission = 76+0.0034*value;
	}
	else if(value < 50000){
		commission = 100.00+0.0022*value;
	}
	else if(value < 500000){
		commission = 155+0.0011*value;
	}
	else{
		commission = 255 + 0.0009*value;
	}
	if(commission<39.00){
		commission = 39.00;
	}
	printf("Commission: $%.2f\n",commission);

	return 0;
}
