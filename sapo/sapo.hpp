#ifndef SAPO_HPP
#define SAPO_HPP


class Sapo{
	private:
		int identificador;
		int distanciaPercorrida;
		int quantidadePulos;
	public:
		Sapo();
		void distanciaRandomica();
		int getIdentificador();
		void setIdentificador(int ident);
		int getDistPercorrida();
		void setDistPercorrida(int dist);
		int getQuantPulos();
		void setQuantPulos(int pulos);
		static int distanciaTotal;
};

#endif
