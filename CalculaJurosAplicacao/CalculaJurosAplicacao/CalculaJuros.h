#pragma once
class CalculaJuros
{
private:
	double montante, principal, aux;
	float juros, tempo;

public:
	CalculaJuros();
	void JurosSimples();
	void JurosCompostos();
	void Imprime();
	~CalculaJuros();
};

