#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "sapo.hpp"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

Sapo::Sapo(){
	distanciaPercorrida = 0;
	quantidadePulos = 0;
}

int Sapo::getIdentificador(){
	return identificador;
}

void Sapo::setIdentificador(int ident){
	identificador = ident;
}

int Sapo::getDistPercorrida(){
	return distanciaPercorrida;
}

void Sapo::setDistPercorrida(int dist){
	distanciaPercorrida = dist;
}

int Sapo::getQuantPulos(){
	return quantidadePulos;
}

void Sapo::setQuantPulos(int pulos){
	quantidadePulos = pulos;
}

int Sapo::distanciaTotal = 50;


void Sapo::distanciaRandomica(){
	int random = 0, i;
	int identificador, quantPulos = 0, distTotal = 0, aux = 0;
	int pMax;

	cout << "A distancia desta corrida eh: " << distanciaTotal << endl;
	cout << "Informe o numero indicador do sapo: ";
	cin >> identificador;
	setIdentificador(identificador);

	cout << "Qual a distancia maxima atingida por um pulo desse sapo: ";
	cin >> pMax;

	distTotal = distanciaTotal;
	srand(time(NULL));
	while(distTotal > 0){
		aux = rand() % pMax + 1;
		random += aux;
		distTotal -= aux;
		aux = 0;
		quantPulos++;
	}
	setDistPercorrida(random);
	setQuantPulos(quantPulos);

	cout << "O sapo " << getIdentificador() << " percorreu em distancia: " << getDistPercorrida() << ". A quantidade de pulos dados foi: " << getQuantPulos() << "." << endl;

}
