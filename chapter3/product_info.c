#include<stdio.h>

int main(void){
	int item_number,m,d,y;
	float unit_price;
	printf("Enter item number: ");
	scanf("%d",&item_number);
	printf("Enter unit price: ");
	scanf("%f",&unit_price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d",&m,&d,&y);
	printf("Item		Unit		Purchase\n");
	printf("		Price		Date\n");
	printf("%d		$%.2f		%d/%d/%d\n",item_number, unit_price, m,d,y);

	return 0;
}
