#pragma once
class CalculaMontanteInicial
{
private:
	double montante, principal, aux;
	float juros, tempo;

public:
	CalculaMontanteInicial();
	void JurosSimples();
	void JurosCompostos();
	void Imprime();
	~CalculaMontanteInicial();
};

