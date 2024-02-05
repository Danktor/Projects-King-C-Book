#include<stdio.h>

int main(void){
	int hour,minutes,converted;
	printf("Departure time		Arrival time\n");
	printf("  8:00 a.m		  10:16 a.m\n");
	printf("  9:43 a.m		  11:52 a.m\n");
	printf(" 11:19 a.m		   1:31 p.m\n");
	printf(" 12:47 p.m		   3:00 p.m\n");
	printf("  2:00 p.m		   4:08 p.m\n");
	printf("  3:45 p.m		   5:55 p.m\n");
	printf("  7:00 p.m		   9:20 p.m\n");
	printf("  9:45 p.m		  11:58 p.m\n");
	printf("Enter a 24-hour time: ");
	scanf("%d%*c%d",&hour,&minutes);
	converted = hour*60+minutes;
	if(converted<8*60){
		printf("Closest departure time is 8:00 a.m, arriving at 10:16 a.m\n");
	}
	else if(converted<9*60+43){
		printf("Closest departure time is 9:43 a.m, arriving at 11:52 a.m\n");
	}
	else if(converted<11*60+19){
		printf("Closest departure time is 11:19 a.m, arriving at 1:31 p.m\n");
	}
	else if(converted<12*60+47){
		printf("Closest departure time is 12:47 p.m, arriving at 3:00 p.m\n");
	}
	else if(converted<14*60){
		printf("Closest departure time is 2:00 p.m, arriving at 4:08 p.m\n");
	}
	else if(converted<15*60+45){
		printf("Closest departure time is 3:45 p.m, arriving at 5:55 p.m\n");
	}
	else if(converted<19*60){
		printf("Closest departure time is 7:00 p.m, arriving at 9:20 p.m\n");
	}
	else if(converted<21*60+45){
		printf("Closest departure time is 9:45 p.m, arriving at 11:58 p.m\n");
	} 
	else {
		printf("No flight is available at that hour, tomorrow the closest departure time is 8:00 a.m, arriving at 10:16 a.m\n");
	}
	return 0;
}
