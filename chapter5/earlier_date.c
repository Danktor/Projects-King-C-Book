#include<stdio.h>

int main(void){
	int d0,d1,m0,m1,y0,y1;
	printf("Enter first date (mm/dd/yyyy): ");
	scanf("%d%*c%d%*c%d",&m0,&d0,&y0);
	printf("Enter second date (mm/dd/yyyy): ");
	scanf("%d%*c%d%*c%d",&m1,&d1,&y1);
	if(y0<y1){
		printf("%d/%d/%d is earlier\n",m0,d0,y0);
	}
	else if(y1<y0){
		printf("%d/%d/%d is earlier\n",m1,d1,y1);
	}
	else if(m0<m1){
		printf("%d/%d/%d is earlier\n",m0,d0,y0);	
	}
	else if(m1<m0){
		printf("%d/%d/%d is earlier\n",m1,d1,y1);
	}
	else if(d0<d1){
		printf("%d/%d/%d is earlier\n",m0,d0,y0);
	}
	else if (d1<d0){
		printf("%d/%d/%d is earlier\n",m1,d1,y1);
	}
	else{
		printf("Both dates are the same\n");
	}
	return 0;
}
