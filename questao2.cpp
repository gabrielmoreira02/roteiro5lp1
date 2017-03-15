#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

class Invoice{
	int numero;
	string descricao;
	int qntd;
	float preco;
public:
	Invoice(int n, string d, int q, float p){
		numero = n;
		descricao = d;
		setQntd(q);
		setPreco(p);
	}
	int getNumero(){
		return numero;
	}
	string getDescricao(){
		return descricao;
	}
	int getQntd(){
		return qntd;
	}
	float getPreco(){
		return preco;
	}
	void setPreco(float d){
		if (d<0.0){
			preco = 0.0;
		}else{
			preco=d;
		}
	}
	void setDescricao(string m){
		descricao=m;
	}
	void setQntd(int a){
		if(a>0){
			qntd=a;
		}else{
			qntd=0;
		}
	}
	void setNumero(int a){
		numero=a;
	}
	float getInvoiceAmount(){
		float k;
		k = preco*qntd;
		return k;	
	}
};

class InvoiceTest{
public:
	int main(){
		Invoice i1(32109,"Remedio",-17,-4);
		Invoice i2 (43232, "Pasta de dente", 24, 3.6);

		cout << "Produto 1: "<< i1.getNumero() << "/" << i1.getDescricao() <<"/" <<i1.getQntd()<< "/" << i1.getPreco()<<endl;

		cout << "Invoice Amount Produto 1:  " << i1.getInvoiceAmount() << endl;

		i1.setPreco(43.4);
		i1.setDescricao("Descricao Nova");
		i1.setQntd(32);
		i1.setNumero(2342);

		cout << "Produto 1 (Apos modificar variaveis): "<< i1.getNumero() << "/" << i1.getDescricao() <<"/" <<i1.getQntd()<< "/" << i1.getPreco()<<endl;

		cout << "Invoice Amount Produto 1 (Apos modificar variaveis:  " << i1.getInvoiceAmount() << endl;

		cout << "Produto 2: "<< i2.getNumero() << "/" << i2.getDescricao() <<"/" <<i2.getQntd()<< "/" << i2.getPreco()<<endl;

		cout << "Invoice Amount Produto 1:  " << i2.getInvoiceAmount() << endl;
		return 0;
	}
};


int main(){

	InvoiceTest i;

	i.main();
}