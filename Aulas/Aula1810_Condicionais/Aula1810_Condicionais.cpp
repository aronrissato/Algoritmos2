﻿// Aula1810_Condicionais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>


int LerNumeroInteiro()
{
	int a;

	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &a);

	return a;
}

int MaiorValorInteiro(int a, int b, int c, int d)
{
	int maior = a;

	if (maior < b)
	{
		maior = b;
	}
	if (maior < c)
	{
		maior = c;
	}
	if (maior < d)
	{
		maior = d;
	}

	return maior;
}

float CalculaMedia(float a, float b, float c, float d)
{
	float soma = a + b + c + d;

	float media = soma / 4;

	return media;
}

void ImprimeValoresMaioresQueMedia(int a, int b, int c, int d, float media)
{
	printf("Os valores maiores que a media sao: ");

	if (a > media)
	{
		printf("%i ", a);
	}
	if (b > media)
	{
		printf("%i ", b);
	}
	if (c > media)
	{
		printf("%i ", c);
	}
	if (d > media)
	{
		printf("%i ", d);
	}
}


int main()
{
	int primeiro = LerNumeroInteiro();
	int segundo = LerNumeroInteiro();
	int terceiro = LerNumeroInteiro();
	int quarto = LerNumeroInteiro();

	int m = MaiorValorInteiro(primeiro, segundo, terceiro, quarto);


	printf("Maior valor encontrado: %i\n\n", m);
	
	float mediaValores = CalculaMedia((float)primeiro, (float)segundo, (float)terceiro, (float)quarto);

	printf("A media dos valores digitados eh: %f\n", (float)mediaValores);

	ImprimeValoresMaioresQueMedia(primeiro, segundo, terceiro, quarto, mediaValores );
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln