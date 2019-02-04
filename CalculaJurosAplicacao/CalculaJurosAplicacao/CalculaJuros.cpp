#include "CalculaJuros.h"
#include <math.h>
#include <iostream>
using namespace std;

CalculaJuros::CalculaJuros(){
	cout << "\n\nInforme o montante inicial: ";
	cin >> this->principal;
	cout << "\nInInforme o montante final: ";
	cin >> this->montante;
	cout << "\nInforme o tempo de aplicacao (mesma medida de tempo dos juros): ";
	cin >> this->tempo;
	cout << endl;
}

void CalculaJuros::JurosSimples() {
	this->juros = (this->montante - this->principal);
}

void CalculaJuros::JurosCompostos() {
	this->juros = (this->montante - this->principal);
}

void CalculaJuros::Imprime() {
	cout << "\nPrincipal: " << this->principal << endl;
	cout << "Montante final: " << this->montante << endl;
	cout << "Tempo: " << this->tempo << endl;
	cout << "JUROS = R$" << this->juros << ",00" << endl;
}

CalculaJuros::~CalculaJuros(){
}
