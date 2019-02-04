#include "CalculaMontanteInicial.h"
#include <math.h>
#include <iostream>
using namespace std;


CalculaMontanteInicial::CalculaMontanteInicial(){
	cout << "\n\nInforme o montante final: ";
	cin >> this->montante;
	cout << "\nInforme a taxa de juros(%): ";
	cin >> this->juros;
	this->juros = this->juros / 100;
	cout << "\nInforme o tempo de aplicacao (mesma medida de tempo dos juros): ";
	cin >> this->tempo;
	cout << endl;
}

void CalculaMontanteInicial::JurosSimples() {
	this->principal = this->montante / (1 + (this->juros * this->tempo));
}

void CalculaMontanteInicial::JurosCompostos() {
	this->principal = this->montante / (pow((1 + this->juros), this->tempo));
}

void CalculaMontanteInicial::Imprime() {
	cout << "\nMontante final: " << this->montante << endl;
	cout << "Juros: " << this->juros << endl;
	cout << "Tempo: " << this->tempo << endl;
	cout << "MONTANTE INICIAL = " << this->principal << endl;
}

CalculaMontanteInicial::~CalculaMontanteInicial(){
}
