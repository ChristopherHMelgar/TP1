/*
 * operacionesMatematicas.h
 *
 *  Created on: Sep 3, 2019
 *      Author: chris
 */
#define RETORNO_EXITOSO 0
#define ERROR -1

int calcularSuma(int numero1, int numero2, int *respuestaSuma);
int calcularResta(int numero1, int numero2);
int calcularDivicion(int numero1, int numero2);
int calcuarMultiplicacion(int numero1, int numero2);
int calcularFactorial(int numero);

int calcularSuma(int numero1, int numero2, int *respuestaSuma) {
	int suma;
	suma = numero1 + numero2;
	printf("SUMA: %d NUMERO1: %d NUMERO2: %d", suma, numero1, numero2);
	*respuestaSuma = suma;
	printf("RESPUESTA: %d", respuestaSuma);
	return RETORNO_EXITOSO;
}

int calcularResta(int numero1, int numero2) {
	int resta;
	resta = numero1 - numero2;
	printf("El resulatado de A-B es: %d", resta);
	return RETORNO_EXITOSO;
}

int calcularDivicion(int numero1, int numero2) {
	int divicion;
	if(numero2 == 0) {
		printf("No es posible dividir por cero");
	}
	divicion = numero1 / numero2;
	printf("El resultado de A/B es: %d", divicion);
	return RETORNO_EXITOSO;
}

int calcularMultiplicacion(int numero1, int numero2) {
	int multiplicacion;
	multiplicacion = numero1 * numero2;
	printf("El resultado de A*B es: %d", multiplicacion);
	return RETORNO_EXITOSO;
}

int calcularFactorial(int numero){
	int factorial;
	if(numero == 1) {
		return 1;
	}
	factorial = numero * calcularFactorial(numero - 1);
	//printf("El factorial es: %d", factorial);
//	*respuestaFactorial = factorial;
	return factorial;
}
