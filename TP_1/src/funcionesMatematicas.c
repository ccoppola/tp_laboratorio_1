/*
 * funcionesMatematicas.c
 *
 *  Created on: 21 sep. 2021
 *      Author: Camii
 */

#include "funcionesMatematicas.h"


float Sumar(float numeroUno, float numeroDos)
{
	float suma;
	suma = numeroUno + numeroDos;
	return suma;
}

float Restar(float numeroUno, float numeroDos)
{
	float resta;
	resta = numeroUno - numeroDos;
	return resta;
}

float Multiplicar(float numeroUno, float numeroDos)
{
	float multiplicar;
	multiplicar = numeroUno*numeroDos;
	return multiplicar;
}

float Dividir (float numeroUno, float numeroDos)
{
	float dividir;
	dividir = numeroUno/numeroDos;
	return dividir;
}

double Factorial(int numero)
{
	double resultado;

	if(numero == 0)
	{
		resultado = 1;
	}
	else
	{
		resultado = numero * Factorial(numero - 1);
	}
	return resultado;
}
