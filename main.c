#include <stdio.h>

int main(void) {
	int i;
	int numero[100][2];
	char numeros[100][2];
	int sumanumero = 0;

	for (i = 0; i <= 8; i++) {
		printf("Ingrese un numero\n");
		scanf(" %c", &numeros[0][i]);
		if (numeros[0][i] == ',') {
			break;
		}
	}

	sscanf(numeros[0], "%d", numero[0]);
	sumanumero = (numero[0][0]);
	printf("Suma = %d\n", sumanumero);
	printf("El carácter '%c' \n", sumanumero);

	return 0;
}
