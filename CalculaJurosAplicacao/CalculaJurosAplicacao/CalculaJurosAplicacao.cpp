#include <math.h>
#include "CalculaMontanteFinal.h"
#include "CalculaMontanteInicial.h"
#include "CalculaTempoDeInvestimento.h"
#include "CalculaJuros.h"
#include <iostream>
using namespace std;

/*
Formula de juros simples:
----------------------------
Montante = Principal * (1 + (taxa * tempo))
Juros = Principal * taxa * tempo

Formula de juros compostos:
----------------------------
Montante = Principal * ((1 + taxa)^tempo)
Juros = MOntante - Principal
*/

int MenuPrincipal() {
	int op1;

	std::cout << "\n\n1.Aplicacoes com juros compostos.";
	std::cout << "\n2.Aplicacoes com juros simples.";
	std::cout << "\n3.Sair.";
	std::cout << "\nOpcao: ";
	std::cin >> op1;
	return op1;
}

int MenuSecundario() {
	int op2;

	std::cout << "\n\n1.Calcular montante final.";
	std::cout << "\n2.Calcular montante inicial.";
	std::cout << "\n3.Calcular tempo de investimento.";
	std::cout << "\n4.Calcular taxa de juros.";
	std::cout << "\n5.Sair.";
	std::cout << "\nOpcao: ";
	std::cin >> op2;

	return op2;
}

int main() {

	std::cout << "\n\nJuros sobre aplicacoes\n";
	std::cout << "=====================================\n\n";

	int opcao1, opcao2;
	CalculaMontanteFinal *mf;
	CalculaMontanteInicial *mi;
	CalculaTempoDeInvestimento *ti;
	CalculaJuros *j;

	do {
		opcao1 = MenuPrincipal();
		switch (opcao1) {
		case 1:
			do {
				opcao2 = MenuSecundario();
				switch (opcao2) {
				case 1:
					mf = new CalculaMontanteFinal();
					mf->JurosCompostos();
					mf->Imprime();
					delete mf;
					break;
				case 2:
					mi = new CalculaMontanteInicial();
					mi->JurosCompostos();
					mi->Imprime();
					delete mi;
					break;
				case 3:
					ti = new CalculaTempoDeInvestimento();
					ti->JurosCompostos();
					ti->Imprime();
					delete ti;
					break;
				case 4:
					j = new CalculaJuros();
					j->JurosCompostos();
					j->Imprime();
					delete j;
					break;
				case 5:
					break;
				default:
					std::cout << "\n\nOpcao invalida.\n";
					break;
				}
			} while (opcao2 != 5);
			break;
		case 2:
			do {
				opcao2 = MenuSecundario();
				switch (opcao2) {
				case 1:
					mf = new CalculaMontanteFinal();
					mf->JurosSimples();
					mf->Imprime();
					delete mf;
					break;
				case 2:
					mi = new CalculaMontanteInicial();
					mi->JurosSimples();
					mi->Imprime();
					delete mi;
					break;
				case 3:
					ti = new CalculaTempoDeInvestimento();
					ti->JurosSimples();
					ti->Imprime();
					delete ti;
					break;
				case 4:
					j = new CalculaJuros();
					j->JurosSimples();
					j->Imprime();
					delete j;
					break;
				case 5:
					break;
				default:
					std::cout << "\n\nOpcao invalida.\n";
					break;
				}
			} while (opcao2 != 5);
			break;
		case 3:
			break;
		default:
			std::cout << "\n\nOpcao invalida.\n";
			break;
		}

	} while (opcao1 != 3);

	return 0;
}
