// Aula0910.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

/* 
	As linhas abaixo contem inclusao 
	de bibliotecas
*/
#include "pch.h" // biblioteca
#include <iostream>

// Variaveis globais
int a; // inteiro
float b; // real (pouca precisao)
double c; // real (grande precisao)

int main()
{
	// Variaveis locais
	char d; // caractere
	bool e; // booleano (true/false);

	printf("Hello world!\n");

	printf("Teste\t\tTeste\n\n");
	
	printf("A\tB\tC\tD\n");
	printf("A\tB\tC\tD\n");
	printf("A\tB\tC\tD\n\n");

	printf("Mostrando o valor %i \n", 5);
	printf("A soma de %i e %i eh: %i \n", 99, 10, 99+10);

	printf("Mostrando %f, que eh um numero real\n", 4.3);

	printf("Olha soh este numero: %i\n\n\n"); // erro

	int f;
	f = 8;
	a = f * 2;

	printf("Resultado da multiplicacao de %i por 2 eh: %i\n", f, a);



	scanf_s("%i", &a);
	printf("\n\nValor digitado foi: %i\n\n", a);
	printf("Endereco de a: %i\n\n", &a);
	


	printf("Digite um valor real: ");
	scanf_s("%f", &b);

	printf("\n Voce digitou: %f\n\n", b);


	system("pause");
	return 0;
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
