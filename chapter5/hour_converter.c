#include<stdio.h>

int main(void){
	int hr,min;
	printf("Enter a 24-hour time: ");
	scanf("%d%*c%d",&hr,&min);
	if(hr>12){
		hr = hr - 12;
		printf("Equivalent 12-hour time: %d:%02d PM\n",hr,min);
	}
	else{
		printf("Equivalent 12-hour time: %d:%02d AM\n",hr,min);
	}
	return 0;
}
