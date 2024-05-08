#include<stdio.h>

int main(void){	
	int costo_total = 2500;
	int monos = 8;
	int costo_dividido = 2500/8;
	printf("El costo total de la carne fue %d$, y la cantidad de monos es %d\n",costo_total,monos);
	printf("Por lo tanto, el importe deberia ser:  %d$\n",costo_dividido);
	printf("Sin embargo, debido a la ocasion, en caso de no ser posible abonar el total del precio se permite aportar con menos\n");
	return 0;
}
