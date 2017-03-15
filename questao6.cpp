#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <cstdlib>

using namespace std;


const int NUMPAGAMENTOS = 6; // O Numero maximo de despesas corresponde ao numero aqui atribuido -1.

class Pagamento{
	double valorPagamento;
	string nomeDoFuncionario;
public:
	Pagamento(){

	};

	string getNomeDoFuncionario(){
		return nomeDoFuncionario;
	}
	double getValorPagamento(){
		return valorPagamento;
	}
	void setNomeDoFuncionario(string d){
		nomeDoFuncionario=d;
	}
	void setValorPagamento(double a){
		valorPagamento=a;
	}

};

class ControleDePagamentos{
	Pagamento pagamentos[NUMPAGAMENTOS];
public:
	ControleDePagamentos(){

	};

	void setPagamentos(int i, double d, string n){
		pagamentos[i].setValorPagamento(d);
		pagamentos[i].setNomeDoFuncionario(n);
	}

	double calculaTotalPagamentos(){
		int valortotal=0;
		for (int i=0;i<NUMPAGAMENTOS;i++){
			valortotal= valortotal + pagamentos[i].getValorPagamento();
		}
		return valortotal;
	}
	bool existePagamentoParaFuncionario(string t){
		for (int i=0;i<NUMPAGAMENTOS;i++){
			if(t==pagamentos[i].getNomeDoFuncionario()){
				return 1;
			}
		}
		return 0;
	}
};


int main(){

	ControleDePagamentos c;

	c.setPagamentos(1,240,"Gabriel");
	c.setPagamentos(2,932,"Lucas");
	c.setPagamentos(3,232,"Julio");
	c.setPagamentos(4,423,"Vinicius");
	c.setPagamentos(5,542,"Kevin");

	cout<< "Total de pagamentos:  " << c.calculaTotalPagamentos()<<endl;

	cout<< "Verificando se existe pagamento para Gabriel"<< endl;
	if (c.existePagamentoParaFuncionario("Gabriel")==1){
		cout << "Existe pagamento para o funcionario" <<endl;
	}else{
		cout << "Nao existe existe pagamento para o funcionario"<<endl;
	}

	cout<< "Verificando se existe pagamento para Joao"<< endl;
	if (c.existePagamentoParaFuncionario("Joao")==1){
		cout << "Existe pagamento para o funcionario" <<endl;
	}else{
		cout << "Nao existe existe pagamento para o funcionario"<<endl;
	}
}