/*
 ============================================================================
 Name        : TP1.c
 Author      : Christopher Melgar
 Version     : 1.0
 Copyright   : 
 Description : Trabajo Practico 1 in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "operacionesMatematicas.h"
#define RETORNO_EXITOSO 0
#define ERROR -1

void menu(int *opcionMenu);
int calcularOperaciones(int numero1, int numero2, int *respuestaSuma);
int mostrarResultados(int respuestaSuma);
int validarOpcionUsuario(int *opcionUsuario);

int main(void) {
	int opcionMenu, respuestaSuma, respuestaFactorial, salir = 0;
	printf("INICIO: %d", respuestaSuma);
	do {
		menu(&opcionMenu);
		printf("OPERACION MENU: %d",opcionMenu);
		switch(opcionMenu) {
			case 1: pedirDatos();
				break;
			case 2: pedirDatos();
				break;
			case 3: calcularOperaciones(1, 5, &respuestaSuma);
				printf("CASO 3: %d", respuestaSuma);
				break;
			case 4:
				printf("RESPUESTA SUMA: %d", respuestaSuma);
				mostrarResultados(respuestaSuma);
				break;
			case 5: salir = 1;
				break;
		}
	} while(salir != 1);
	return RETORNO_EXITOSO;
}

void menu(int *opcionMenu) {
	int opcionUsuario;
	printf("1. Ingresar 1er operando\n");
	printf("2. Ingresar 2do operando\n");
	printf("3. Calcular todas las Operaciones\n");
	printf("4. Informar Resultados\n");
	printf("5. Salir\n");
	printf("**ELEGIR UNA OPCION PARA CONTINUAR**");
	scanf("%d", &opcionUsuario);
	*opcionMenu = opcionUsuario;
}

int pedirDatos() {
	printf("PIDE DATOS\n");
	return RETORNO_EXITOSO;
}

int calcularOperaciones(int numero1, int numero2, int *respuestaSuma) {
	printf("CALULA LAS OPERACIONES\n");
	calcularSuma(1, 3, &respuestaSuma);
	return RETORNO_EXITOSO;
}

int mostrarResultados(int respuestaSuma) {
	printf("MUESTRA LOS RESULTADOS\n");
	printf("El resulatado de A+B es: %d", respuestaSuma);
	return RETORNO_EXITOSO;
}
