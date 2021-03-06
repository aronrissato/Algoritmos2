// Aula1110_Funcoes.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>


void HelloWorld()
{
	printf("\nHello World!\n");
}

int Somar2Valores(int x, int y)
{
	int c;
	c = x + y;
	return c;
}

int LerNumeroInteiro()
{
	printf("\nFavor digitar um numero inteiro: ");
	int numero;
	scanf_s("%i", &numero);
	return numero;
}

int main()
{
	LerNumeroInteiro();

	HelloWorld();

	int a = Somar2Valores(55, 44);
	printf("Resultado da soma: %i\n", a);

	int primeiroValor = LerNumeroInteiro();
	int segundoValor = LerNumeroInteiro();
	int d = Somar2Valores(primeiroValor, segundoValor);
	printf("Resultado da soma: %i\n", d);

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
