#include<stdio.h>

int main(void){
	float largest;
	printf("Enter a number: ");
	scanf("%f",&largest);
	for(float i=1;i>0;i++){
		printf("Enter a number: ");
		scanf("%f",&i);
		if(i<=0)
			break;
		if(i>largest)
			largest = i;
	}
	printf("The largest number entered was %.2f\n",largest);



	return 0;
}
