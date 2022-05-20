/*Autor: Ricardo Jafet Granados Chable, Realizado: 03/03/2022
    programa numero 27 en C: Media salarial.
	*/
#include<stdio.h>

int main() {
	float sueldo,salario;
	int contador, tiempo; 
	printf("--------------------------------");
	printf("\nMedia salarial");
	printf("\n--------------------------------");
	
	while(sueldo!=0) {
		printf("\nIntroduce tu sueldo: ");
	    scanf("%f", &sueldo);
	    printf("\nIntroduce tu tiempo trabajado: ");
	    scanf("%d", &tiempo);
	    salario=sueldo*tiempo;
	    printf("\nTu salario es: %.2f", salario);
	    printf("\n----------------------------------------");
	}
	return 0;
}
