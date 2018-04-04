#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "corridaSapos.hpp"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
corridaSapos::corridaSapos(){
    int sapo1 = 0;
    int sapo2 = 0;
    int sapo3 = 0;
    int distanciaPercorrida = 0;
    int quantidadePulos = 0;
}
int corridaSapos::getSapo1(){
	return sapo1;
}

void corridaSapos::setSapo1(int ident1){
	sapo1 = ident1;
}

int corridaSapos::getSapo2(){
	return sapo2;
}

void corridaSapos::setSapo2(int ident2){
	sapo2 = ident2;
}

int corridaSapos::getSapo3(){
	return sapo3;
}

void corridaSapos::setSapo3(int ident3){
	sapo3 = ident3;
}

int corridaSapos::getDistPercorrida(){
	return distanciaPercorrida;
}

void corridaSapos::setDistPercorrida(int dist){
	distanciaPercorrida = dist;
}

int corridaSapos::getQuantPulos(){
	return quantidadePulos;
}

void corridaSapos::setQuantPulos(int pulos){
	quantidadePulos = pulos;
}

int corridaSapos::distanciaTotal = 50;


void corridaSapos::corridaRandomica(){
	int receberSapo = 0;
	int random = 0, i, aux = 0;
	int identificador = 0, ganhador = 0;
	int quantPulos = 0;
	int sapo[3];
	int puloMax[3];
	int contPulos[3];
	int alertaVencedor = 0;

	cout << "A distancia desta corrida eh: " << distanciaTotal << endl;
	cout << "Informe os identificadores dos sapos que vao participar da corrida: ";
	cin >> receberSapo;
	setSapo1(receberSapo);
	cin >> receberSapo;
	setSapo2(receberSapo);
	cin >> receberSapo;
	setSapo3(receberSapo);

	cout << "Qual a distancia maxima atingida por um pulo do sapo1, sapo2 e sapo3, respectivamente: ";
	for(i = 0; i < 3; i++){
		cin >> puloMax[i];
		sapo[i] = 0;
		contPulos[i] = 0;
	}

	cout << "A corrida vai comecar!" << endl;

	srand(time(NULL));


	while(alertaVencedor != distanciaTotal){
		sapo[aux] += rand() % puloMax[aux] + 1;
		contPulos[aux]++;
		if(sapo[aux] >= distanciaTotal){
 			random = sapo[aux];
			identificador = aux+1;
			alertaVencedor = distanciaTotal;
			quantPulos = contPulos[aux];
		}
		aux++;
		if(aux == 3){
			aux = 0;
		}
	}

	setDistPercorrida(random);
	setQuantPulos(quantPulos);

	if(identificador == 1){
		ganhador = getSapo1();
	}
	if(identificador == 2){
		ganhador = getSapo2();
	}
	if(identificador == 3){
		ganhador = getSapo3();
	}

	cout << "A corrida terminou e o vencedor eh o sapo " << ganhador << "." << endl;
	cout << "Percorreu em distancia: " << getDistPercorrida() << ". A quantidade de pulos dados foi: " << getQuantPulos() << "." << endl;

}
