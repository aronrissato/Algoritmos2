// Aula1610_Condicionais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>

int main()
{
    // SE
	if (true)
	{
		// este codigo sera executado
	}


	if (false)
	{
		// este codigo nao sera executado
	}


	int a = 0;

	if (a == 0)
	{
		printf("a igual a zero\n");
	}

	if (a != 0)
	{
		printf("A diferente de zero\n");
	}

	int b = 5;

	if (b < a)
	{
		printf("B menor que A");
	}

	if (a <= b) // a pode ser menor, pode ser igual e pode ser diferente
	{
		printf("A menor ou igual a B");
	}

	system("pause");
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
