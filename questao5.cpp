#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <cstdlib>

using namespace std;


const int NUMDESPESAS = 6; // O Numero maximo de despesas corresponde ao numero aqui atribuido -1.

class Despesa{
	double valor;
	string tipoDeGasto;
public:
	Despesa(){
	//	valor=v;
	//	tipoDeGasto=t;
	}

	string getTipoDeGasto(){
		return tipoDeGasto;
	}
	double getValor(){
		return valor;
	}
	void setTipoDeGasto(string d){
		tipoDeGasto=d;
	}
	void setValor(double a){
		valor=a;
	}

};

class ControleDeGastos{
	Despesa despesas[NUMDESPESAS];
public:
	ControleDeGastos(){

	};
	void setDespesas(int i,double v, string t){
		despesas[i].setValor(v);
		despesas[i].setTipoDeGasto(t);
	}

	double calculaTotalDespesas(){
		int valortotal =0;
		for(int i=0;i<NUMDESPESAS;i++){
			valortotal= despesas[i].getValor() +valortotal;
		}
		return valortotal;
	}

	bool existeDespesaDoTipo(string t){
		for(int i=0;i<NUMDESPESAS;i++){
			if(despesas[i].getTipoDeGasto()== t){
				return 1;
			}
		}
		return 0;
	}

};


int main(){

	ControleDeGastos i;

	i.setDespesas(1, 5, "Carro");
	i.setDespesas(2, 3, "Aluguel");
	i.setDespesas(3, 4, "Mobilia");
	i.setDespesas(4, 9, "Presente");
	i.setDespesas(5, 8, "Alimentacao");

	cout << "Total de despesas atribuidas: "<<i.calculaTotalDespesas() <<endl<<endl;

	cout<< "Pesquisando se existem despesas do tipo Alimentacao" <<endl;
	if (i.existeDespesaDoTipo("Alimentacao")==1){
		cout << "Existem despesas do tipo pesquisado" <<endl;
	}else{
		cout << "Nao existem despesas do tipo pesquisado"<<endl;
	}
	cout<< "Pesquisando se existem despesas do tipo Negocios" <<endl;
	if (i.existeDespesaDoTipo("Negocios")==1){
		cout << "Existem despesas do tipo pesquisado" <<endl;
	}else{
		cout << "Nao existem despesas do tipo pesquisado"<<endl;
	}

}