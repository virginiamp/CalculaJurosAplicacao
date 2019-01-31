#include <iostream>
using namespace std;
#include <math.h>


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

int main() {

	cout << "\n\nJuros sobre aplicacoes\n";
	cout << "=====================================\n\n";

	int opcao, opcao2;
	double montante, principal, aux;
	float juros, tempo;

	do {
		cout << "\n\n1.Aplicacoes com juros compostos.";
		cout << "\n2.Aplicacoes com juros simples.";
		cout << "\n3.Sair.";
		cout << "\nOpcao: ";
		cin >> opcao;

		switch (opcao) {
		case 1:
			do {
				cout << "\n\n1.Calcular montante final.";
				cout << "\n2.Calcular montante inicial.";
				cout << "\n3.Calcular tempo de investimento.";
				cout << "\n4.Calcular taxa de juros.";
				cout << "\n5.Sair.";
				cout << "\nOpcao: ";
				cin >> opcao2;

				switch (opcao2) {
				case 1:
					cout << "\n\nInforme o montante inicial: ";
					cin >> principal;
					cout << "\nInforme a taxa de juros(%): ";
					cin >> juros;
					cout << "\nInforme o tempo de aplicacao (mesma medida de tempo dos juros): ";
					cin >> tempo;
					cout << endl;

					juros = juros / 100;
					montante = principal * (pow((1 + juros), tempo));

					cout << "\nPrincipal: " << principal << endl;
					cout << "Juros: " << juros << endl;
					cout << "Tempo: " << tempo << endl;
					cout << "MONTANTE FINAL = " << montante << endl;

					break;
				case 2:
					cout << "\n\nInforme o montante final: ";
					cin >> montante;
					cout << "\nInforme a taxa de juros(%): ";
					cin >> juros;
					cout << "\nInforme o tempo de aplicacao (mesma medida de tempo dos juros): ";
					cin >> tempo;
					cout << endl;

					juros = juros / 100;
					principal = montante / (pow((1 + juros), tempo));

					cout << "\nMontante final: " << montante << endl;
					cout << "Juros: " << juros << endl;
					cout << "Tempo: " << tempo << endl;
					cout << "MONTANTE INICIAL = " << principal << endl;

					break;
				case 3:
					cout << "\n\nInforme o montante inicial: ";
					cin >> principal;
					cout << "\nInforme a taxa de juros(%): ";
					cin >> juros;
					cout << "\nInforme o montante final: ";
					cin >> montante;
					cout << endl;

					juros = juros / 100;
					tempo = log10(montante / principal) / log10(1 + juros);

					cout << "\nPrincipal: " << principal << endl;
					cout << "Juros: " << juros << endl;
					cout << "Montante final: " << montante << endl;
					cout << "TEMPO DE APLICACAO = " << tempo << endl;

					break;
				case 4:
					cout << "\n\nInforme o montante inicial: ";
					cin >> principal;
					cout << "\nInInforme o montante final: ";
					cin >> montante;
					cout << "\nInforme o tempo de aplicacao (mesma medida de tempo dos juros): ";
					cin >> tempo;
					cout << endl;

					juros = (montante - principal);
					//Montante = Principal * ((1 + taxa) ^ tempo)
					//juros = ((aux / montante) / tempo) * 100;

					cout << "\nPrincipal: " << principal << endl;
					cout << "Montante final: " << montante << endl;
					cout << "Tempo: " << tempo << endl;
					cout << "JUROS = R$" << juros << ",00" << endl;

					break;
				case 5:
					break;
				default:
					cout << "\n\nOpcao invalida.\n";
					break;
				}
			} while (opcao2 != 5);
			break;
		case 2:
			do {
				cout << "\n\n1.Calcular montante final.";
				cout << "\n2.Calcular montante inicial.";
				cout << "\n3.Calcular tempo de investimento.";
				cout << "\n4.Calcular taxa de juros.";
				cout << "\n5.Sair.";
				cout << "\nOpcao: ";
				cin >> opcao2;

				switch (opcao2) {
				case 1:
					cout << "\n\nInforme o montante inicial: ";
					cin >> principal;
					cout << "\nInforme a taxa de juros(%): ";
					cin >> juros;
					cout << "\nInforme o tempo de aplicacao (mesma medida de tempo dos juros): ";
					cin >> tempo;
					cout << endl;

					juros = juros / 100;
					//montante = principal + (principal * juros * tempo);
					montante = principal * (1 + (juros * tempo));


					cout << "\nPrincipal: " << principal << endl;
					cout << "Juros: " << juros << endl;
					cout << "Tempo: " << tempo << endl;
					cout << "MONTANTE FINAL = " << montante << endl;

					break;
				case 2:
					cout << "\n\nInforme o montante final: ";
					cin >> montante;
					cout << "\nInforme a taxa de juros(%): ";
					cin >> juros;
					cout << "\nInforme o tempo de aplicacao (mesma medida de tempo dos juros): ";
					cin >> tempo;
					cout << endl;

					juros = juros / 100;
					principal = montante / (1 + (juros * tempo));

					cout << "\nMontante final: " << montante << endl;
					cout << "Juros: " << juros << endl;
					cout << "Tempo: " << tempo << endl;
					cout << "MONTANTE INICIAL = " << principal << endl;

					break;
				case 3:
					cout << "\n\nInforme o montante inicial: ";
					cin >> principal;
					cout << "\nInforme a taxa de juros(%): ";
					cin >> juros;
					cout << "\nInforme o montante final: ";
					cin >> montante;
					cout << endl;

					juros = juros / 100;
					tempo = (montante - principal) / (principal * juros);

					cout << "\nPrincipal: " << principal << endl;
					cout << "Juros: " << juros << endl;
					cout << "Montante final: " << montante << endl;
					cout << "TEMPO DE APLICACAO = " << tempo << endl;

					break;
				case 4:
					cout << "\n\nInforme o montante inicial: ";
					cin >> principal;
					cout << "\nInInforme o montante final: ";
					cin >> montante;
					cout << "\nInforme o tempo de aplicacao (mesma medida de tempo dos juros): ";
					cin >> tempo;
					cout << endl;

					//aux = (montante - principal);
					//cout << "JUROS = " << aux << endl;
					//juros = ((aux / montante) / tempo) * 100;
					juros = (montante - principal);

					cout << "\nPrincipal: " << principal << endl;
					cout << "Montante final: " << montante << endl;
					cout << "Tempo: " << tempo << endl;
					cout << "JUROS = R$" << juros << ",00" << endl;

					break;
				case 5:
					break;
				default:
					cout << "\n\nOpcao invalida.\n";
					break;
				}
			} while (opcao2 != 5);
			break;
		case 3:
			break;
		default:
			cout << "\n\nOpcao invalida.\n";
			break;
		}

	} while (opcao != 3);


	return 0;
}
