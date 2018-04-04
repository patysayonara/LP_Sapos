#ifndef CORRIDASAPOS_HPP
#define CORRIDASAPOS_HPP


class corridaSapos{
	private:
		int sapo1;
		int sapo2;
		int sapo3;
		int distanciaPercorrida;
		int quantidadePulos;
	public:
	    corridaSapos();
		int getSapo1();
		void setSapo1(int ident1);
		int getSapo2();
		void setSapo2(int ident2);
		int getSapo3();
		void setSapo3(int ident3);
		void corridaRandomica();
		int getDistPercorrida();
		void setDistPercorrida(int dist);
		int getQuantPulos();
		void setQuantPulos(int pulos);
        static int distanciaTotal;
};

#endif
