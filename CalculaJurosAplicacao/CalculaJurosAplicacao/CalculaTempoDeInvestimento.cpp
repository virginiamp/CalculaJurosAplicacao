#include "CalculaTempoDeInvestimento.h"
#include <math.h>
#include <iostream>
using namespace std;

CalculaTempoDeInvestimento::CalculaTempoDeInvestimento(){
	cout << "\n\nInforme o montante inicial: ";
	cin >> this->principal;
	cout << "\nInforme a taxa de juros(%): ";
	cin >> this->juros;
	this->juros = this->juros / 100;
	cout << "\nInforme o montante final: ";
	cin >> this->montante;
	cout << endl;
}

void CalculaTempoDeInvestimento::JurosSimples() {
	this->tempo = (this->montante - this->principal) / (this->principal * this->juros);
}

void CalculaTempoDeInvestimento::JurosCompostos() {
	this->tempo = log10(this->montante / this->principal) / log10(1 + this->juros);
}

void CalculaTempoDeInvestimento::Imprime() {
	cout << "\nPrincipal: " << this->principal << endl;
	cout << "Juros: " << this->juros << endl;
	cout << "Montante final: " << this->montante << endl;
	cout << "TEMPO DE APLICACAO = " << this->tempo << endl;
}

CalculaTempoDeInvestimento::~CalculaTempoDeInvestimento(){
}
