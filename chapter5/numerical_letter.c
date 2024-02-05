#include<stdio.h>

int main(void){
	int num;
	printf("Enter numerical grade: ");
	scanf("%d",&num);
	if(num>=90&&num<=100){
		printf("Letter grade: A\n");
	}
	else if(num>=80&&num<=89){
		printf("Letter grade: B\n");
	}
	else if(num>=70&&num<=79){
		printf("Letter grade: C\n");
	}
	else if(num>=60&&num<=69){
		printf("Letter grade: D\n");
	}
	else if(num>=0&&num<=59){
		printf("Letter graded: F\n");
	}
	else{
		printf("ERROR\n");
	}
	return 0;
}
