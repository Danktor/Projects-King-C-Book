#include<stdio.h>

int main(void){
	int d1,d2;
	printf("Enter a two-digit number: ");
	scanf("%1d%1d",&d1,&d2);
	if(d1==1){
		if(d2==0){
			printf("You entered the number ten\n");
		}
		else if(d2==1){
			printf("You entered the number eleven\n");
		}
		else if(d2==2){
			printf("You entered the number twelve\n");
		}
		else if(d2==3){
			printf("You entered the number thirtteen\n");	
		}
		else if(d2==4){
			printf("You entered the number fourteen\n");
		}
		else if(d2==5){
			printf("You entered the number fifteen\n");
		}
		else if(d2==6){
			printf("You entered the number sixteen\n");
		}
		else if(d2==7){
			printf("You entered the number seventeen\n");
		}
		else if(d2==8){
			printf("You entered the number eighteen\n");
		}
		else if(d2==9){
			printf("You entered the number nineteen\n");
		}
		else{
			printf("You entered the number one\n");
		}
	}
	else{
		switch(d1){
			case 2:
				printf("You entered the number twenty");
				break;
			case 3:
				printf("You entered the number thirty");
				break;
			case 4:
				printf("You entered the number fourty");
				break;
			case 5:
				printf("You entered the number fifty");
				break;
			case 6:
				printf("You entered the number sixty");
				break;
			case 7:
				printf("You entered the number seventy");
				break;
			case 8:
				printf("You entered the number eighty");
				break;
			case 9:
				printf("You entered the number ninety");
		}
		switch(d2){
			case 0:
				printf("\n");
				break;
			case 1:
				printf("-one\n");
				break;
			case 2:
				printf("-two\n");
				break;
			case 3:
				printf("-three\n");
				break;
			case 4:
				printf("-four\n");
				break;
			case 5:
				printf("-five\n");
				break;
			case 6:
				printf("-six\n");
				break;
			case 7:
				printf("-seven\n");
				break;
			case 8:
				printf("-eight\n");
				break;
			case 9:
				printf("-nine\n");
		}
	}


	return 0;
}
