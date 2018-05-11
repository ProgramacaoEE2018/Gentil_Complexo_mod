#include "Complexo.h"
#include <stdio.h>

int main() {
	Complexo z1(3, 4);
	Complexo z2(3, 4);
	Complexo conjugado(3, -4);
	Complexo divisao(1, 0);
	Complexo produto(-7, 24);
	Complexo soma(6, 8);
	float modulo;

	//Teste Modulo
	modulo = z1.Modulo();
	if (modulo == 5) {
		printf("Modulo OK\n");

		//Teste Diferenca
		modulo = (z1.Diferenca(z2)).Modulo();
		if (modulo == 0) {
			printf("Diferenca OK\n");
		}
		else {
			printf("Falha Difernca\n");
		}

		//Teste Divisao
		modulo = ((z1.Divisao(z2)).Diferenca(divisao)).Modulo();
		if (modulo == 0) {
			printf("Divisao OK\n");
		}
		else {
			printf("Falha Divisao\n");
		}

		//Teste Conjugado
		modulo = (z1.Conjugado().Diferenca(conjugado)).Modulo();
		if (modulo == 0) {
			printf("Conjugado OK\n");
		}
		else {
			printf("Falha Conjugado\n");
		}

		//Teste Produto
		modulo = ((z1.Produto(z2)).Diferenca(produto)).Modulo();
		if (modulo == 0) {
			printf("produto OK\n");
		}
		else {
			printf("Falha produto\n");
		}

		//Teste Soma
		modulo = ((z1.Soma(z2)).Diferenca(soma)).Modulo();
		if (modulo == 0) {
			printf("Soma OK\n");
		}
		else {
			printf("Falha Soma\n");
		}
	}
	else {
		printf("Falha Modulo\n");
	}


	return 0;
}