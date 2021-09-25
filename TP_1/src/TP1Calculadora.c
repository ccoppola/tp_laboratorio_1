/*
 ============================================================================
 Name        : TP1Calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesMatematicas.h"

int main(void) {
	setbuf(stdout, NULL);
	float numeroUno;
	float numeroDos;
	float resultado;
	double resultadoFactorial1;
	double resultadoFactorial2;
	char opcionCalculos;
	int opcionMenu;
	int flagSuma;
	int flagResta;
	int flagDivision;
	int flagMultiplicacion;
	int flagFactorial;
	int flagNum1;
	int flagNum2;
	char seguir;

	flagSuma = 0;
	flagResta = 0;
	flagDivision = 0;
	flagMultiplicacion = 0;
	flagFactorial = 0;

	do {
		if (flagNum1 == 1)
		{
			printf("1)Ingresar el primer numero.(A=%.2f)\n", numeroUno);
		}
		else
		{
			printf("1)Ingresar el primer numero.(A=x)\n");
		}
		if(flagNum2 == 1)
		{
			printf("2)Ingresar el segundo numero. (B=%.2f)\n", numeroDos);
		}
		else
		{
			printf("2)Ingresar el segundo numero.(B=y)\n");
		}

		printf("3)Ingresar la opcion que desea realizar.\n");
		printf("4)Informar resultados.\n");
		printf("5)Salir.\n");

		scanf("%d", &opcionMenu);

		switch (opcionMenu)
		{
			case 1:
				printf("1)Ingrese el primer numero: ");
				scanf("%f", &numeroUno);
				flagNum1 = 1;
				break;

			case 2:
				printf("2)Ingrese el segundo numero: ");
				scanf("%f", &numeroDos);
				flagNum2 = 1;
				break;

			case 3:
				if (flagNum1 == 1 && flagNum2 == 1)
				{
					printf("3)Ingrese la opcion que desea realizar: \n");
					printf("a)Calcular la suma: (%.2f+%.2f)\n", numeroUno, numeroDos);
					printf("b)Calcular la resta: (%.2f-%.2f)\n", numeroUno, numeroDos);
					printf("c)Calcular la division: (%.2f/%.2f)\n", numeroUno,
							numeroDos);
					printf("d)Calcular la multiplicacion: (%.2f*%.2f)\n", numeroUno,
							numeroDos);
					printf("e)Calcular la factorial: (%.0f!) y (%.0f!)\n", numeroUno, numeroDos);

					fflush(stdin);
					scanf("%c", &opcionCalculos);
					switch (opcionCalculos) {
					case 'a':
						resultado = Sumar(numeroUno, numeroDos);
						flagSuma = 1;
						break;

					case 'b':
						resultado = Restar(numeroUno, numeroDos);
						flagResta = 1;
						break;

					case 'c':
						if (numeroDos == 0) {
							printf("\nError! No es posible dividir por cero\n");
						} else {
							resultado = Dividir(numeroUno, numeroDos);
							flagDivision = 1;
						}

						break;

					case 'd':
						resultado = Multiplicar(numeroUno, numeroDos);
						flagMultiplicacion = 1;
						break;

					case 'e':
						resultadoFactorial1 = Factorial(numeroUno);
						resultadoFactorial2 = Factorial(numeroDos);
						flagFactorial = 1;
						break;
					}
				}
				else
				{
					printf("No ingresaste alguno de los operandos.\n\n");
				}
				break;
			case 4:
				switch (opcionCalculos)
				{
					case 'a':
						if (flagSuma == 1)
						{
							printf("\nLa suma de %.2f + %.2f es: %.2f\n\n", numeroUno,
									numeroDos, resultado);
						}
						break;
					case 'b':
						if (flagResta == 1)
						{
							printf("\nLa resta de %.2f - %.2f es: %.2f\n\n", numeroUno,
									numeroDos, resultado);
						}
						break;
					case 'c':
						if (flagDivision == 1)
						{
							printf("\nLa division de %.2f / %.2f es: %.2f\n\n", numeroUno,
									numeroDos, resultado);
						}
						break;
					case 'd':
						if (flagMultiplicacion == 1)
						{
							printf("\nLa multiplicacion de %.2f * %.2f es: %.2f\n\n",
									numeroUno, numeroDos, resultado);
						}
						break;
					case 'e':
						if (flagFactorial == 1)
						{
							printf("\nEl Factorial de %.0f es: %.0f y el Factorial de %.0f es: %.0f \n\n",
							numeroUno, resultadoFactorial1,numeroDos, resultadoFactorial2);
						}
						break;
				}
				break;
			case 5 :
				seguir = 'n';
				printf("Muchas gracias por utilizar la calculadora.");
				break;

			default:
				printf("La opcion ingresada no existe. Ingrese una opcion valida\n");
		}

	} while (seguir != 'n');

	return EXIT_SUCCESS;
}
