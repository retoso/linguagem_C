#include <stdio.h>

int main(void) {
	int min, max, i, j, primo;
    printf("Por favor, informe o intervalo minimo-maximo \n");
	scanf("%i %i", &min, &max);
	
	for (i = min; i <= max; i++) {
		if (i == 0 || i == 1) {

			primo = 0;
		} else {
			primo = 1; 
			for(j = 2; j < i; j++) { 
				if (i % j == 0) {
					primo = 0; 
				}
			}
		}
		if (primo == 1) {
			printf("%i ", i);
		}
	}
	
	return 0;
}