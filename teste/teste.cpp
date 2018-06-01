#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "teste.hpp"
#include <stdlib.h>
#include <unistd.h>

int Sapo::getSapo1(){
	return sapo1;
}

void Sapo::setSapo1(int ident1){
	sapo1 = ident1;
}

int  Sapo::getSapo2(){
	return sapo2;
}

void Sapo::setSapo2(int ident2){
	sapo2 = ident2;
}

int Sapo::getSapo3(){
	return sapo3;
}

void Sapo::setSapo3(int ident3){
	sapo3 = ident3;
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

int distanciaTotal = 50;


void Sapo::corridaRandomica(){
	int receberSapo = 0;
	int random = 0, i, aux = 0;
	int identificador = 0, ganhador = 0;
	int quantPulos = 0;
	int sapo[3];
	int puloMax[3];
	int contPulos[3];
	int alertaVencedor = 0;

	cout << "A distancia desta corrida é: " << distanciaTotal << endl;
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
	
	cout << "A corrida vai começar!" << endl;

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

	cout << "A corrida terminou e o vencedor é o sapo " << ganhador << "." << endl;
	cout << "Percorreu em distancia: " << getDistPercorrida() << ". A quantidade de pulos dados foi: " << getQuantPulos() << "." << endl;

}

