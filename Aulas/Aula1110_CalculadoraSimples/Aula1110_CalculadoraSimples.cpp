#include "pch.h"
#include <iostream>

int soma(int x, int y)
{
	return x + y;
}
int subtracao(int x, int y)
{
	return x - y;
}
float divisao(float x, float y)
{
	return x / y;
}
int mult(int x, int y)
{
	return x * y;
}

int LerNumeroInteiro()
{
	int a;
	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &a);
	return a;
}

int main()
{
	int primeiroValor = LerNumeroInteiro();

	int segundoValor = LerNumeroInteiro();

	int r = soma(primeiroValor, segundoValor);
	int s = subtracao(primeiroValor, segundoValor);
	float d = divisao((float)primeiroValor, (float)segundoValor);
	int m = mult(primeiroValor, segundoValor);
	
	printf("Valor da soma: %i\n", r);
	printf("Valor da subtracao: %i\n", s);
	printf("Valor da multiplicao: %i\n", m);
	printf("Valor da divisao: %f\n", d);

	system("pause");
}

