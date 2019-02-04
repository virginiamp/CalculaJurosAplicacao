#include "CalculaMontanteFinal.h"
#include <math.h>
#include <iostream>
using namespace std;

CalculaMontanteFinal::CalculaMontanteFinal(){
	cout << "\n\nInforme o montante inicial: ";
	cin >> this->principal;
	cout << "\nInforme a taxa de juros(%): ";
	cin >> this->juros;
	this->juros = this->juros / 100;
	cout << "\nInforme o tempo de aplicacao (mesma medida de tempo dos juros): ";
	cin >> this->tempo;
	cout << endl;
}

void CalculaMontanteFinal::JurosSimples(){
	//this->montante = this->principal + (this->principal * this->juros * this->tempo);
	this->montante = this->principal * (1 + (this->juros * this->tempo));
}

void CalculaMontanteFinal::JurosCompostos(){
	this->montante = this->principal * (pow((1 + this->juros), this->tempo));
}

void CalculaMontanteFinal::Imprime() {
	cout << "\nPrincipal: " << this->principal << endl;
	cout << "Juros: " << this->juros << endl;
	cout << "Tempo: " << this->tempo << endl;
	cout << "MONTANTE FINAL = " << this->montante << endl;
}

CalculaMontanteFinal::~CalculaMontanteFinal(){
}
