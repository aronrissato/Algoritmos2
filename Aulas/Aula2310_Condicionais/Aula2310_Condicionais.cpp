// Aula2310_Condicionais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

float LerSalario()
{
	printf("Favor digitar seu salario: ");
	float salario = 0;
	scanf_s("%f", &salario);
	return salario;
}

float CaulculaIR(float salario, float aliquota, float deducao)
{
	return (salario * aliquota) - deducao;
}

void ApresentarIR(float salario)
{
	float ir = 0;

	if (salario <= 1903.98)
	{
		printf("Isento\nSobrou tudo!");
	}
	else if (salario <= 2826.65)
	{
		ir = CaulculaIR(salario, 0.075, 142.8);
		printf("Aliquota: 7.5%%, deducao: 142.8\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}
	else if (salario <= 3751.05)
	{
		ir = CaulculaIR(salario, 0.15, 354.8);
		printf("Aliquota: 15%%, deducao: 354.8\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}
	else if (salario <= 4664.68)
	{
		ir = CaulculaIR(salario, 0.225, 636.13);
		printf("Aliquota: 22.5%%, deducao: 636.13\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}
	else
	{
		ir = CaulculaIR(salario, 0.275, 869.36);
		printf("Aliquota: 27.5%%, deducao: 869.36\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}
}

void ImprimirMenu()
{
	printf("=======================\n");
	printf("== Escolha uma opcao ==\n");
	printf("== 1 - a ==\n");
	printf("== 2 - b ==\n");
	printf("== 3 - c ==\n");
	printf("=======================\n");

	int opcao = 0;
	scanf_s("%i", &opcao);

	switch (opcao)
	{
	case 1:
	{
		printf("Escolheu a opcao A");
	}
	break;

	case 2:
	{
		printf("Escolheu a opcao B");
	}
	break;
	case 3:
	{
		printf("Escolheu a opcao C");
	}
	break;
	case 4:
	{
		printf("Escolheu a opcao D");
	}
	break;

	default:
	{
		printf("Opcao invalida!\n");
	}
		break;
	}

}


void ApresentarRestoDivisaoComSwitch()
{
	printf("Digite algum numero entre 0 ... 1000");
	int numero = 0;
	scanf_s("%i", &numero);

	int resto = numero % 5;

	switch (resto)
	{
	case 0:
	{
		printf("Eh divisivel");
	}
	break;

	case 1:
	{
		printf("Sobrou 1");
	}
	break;
	case 2:
	{
		printf("Sobrou 2");
	}
	break;
	case 3:
	{
		printf("Sobrou 3");
	}
	break;

	case 4:
	{
		printf("Sobrou 4");
	}
	break;
	}
}

int main()
{
	/*float salario = LerSalario();
	ApresentarIR(salario);*/

	ApresentarRestoDivisaoComSwitch();


	printf("\n\n");
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
