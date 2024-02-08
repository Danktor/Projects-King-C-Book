#include<stdio.h>

int main(void){
	int shares;
	float value,price,commission,rival_plus,rival_commission;
	for(int i=1;i>0;i++){
	printf("Enter the number of shares: ");
	scanf("%d",&shares);
	if(shares==0){
		i = 0;
		break;
	}
	printf("Enter the value of shares: ");
	scanf("%f",&price);
	value = price*shares;
	printf("\nThe value of the trade is: $%.2f\n",value);
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
	if(shares<2000)
		rival_plus = 00.03;
	else
		rival_plus = 00.02;
	rival_commission = 33+rival_plus*shares;
	printf("\nBroker's Commission: $%.2f\n",commission);
	printf("Broker's rivals Comission: $%.2f\n\n",rival_commission);
	}
	return 0;
}	
