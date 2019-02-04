#pragma once
class CalculaTempoDeInvestimento
{
private:
	double montante, principal, aux;
	float juros, tempo;

public:
	CalculaTempoDeInvestimento();
	void JurosSimples();
	void JurosCompostos();
	void Imprime();
	~CalculaTempoDeInvestimento();
};

