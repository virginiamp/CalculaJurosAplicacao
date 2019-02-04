#pragma once
class CalculaMontanteFinal
{
private:
	double montante, principal, aux;
	float juros, tempo;

public:
	CalculaMontanteFinal();
	void JurosSimples();
	void JurosCompostos();
	void Imprime();
	~CalculaMontanteFinal();
};

