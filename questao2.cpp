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
	Invoice(int n, string d, int q, float p){// : numero(n), descricao(d), qntd(q), preco(p);
		numero = n;
		descricao = d;
		qntd = q;
		preco = p;
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
		preco=d;
	}
	void setDescricao(string m){
		descricao=m;
	}
	void setQntd(int a){
		qntd=a;
	}
	void setPreco(int a){
		preco=a;
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
		Invoice i1(32109,"Remedio",17,2);
		Invoice i2 (43232, "Pasta de dente", 24, 3);

		cout << "Produto 1: "<< i1.getNumero() << "/" << i1.getDescricao() <<"/" <<i1.getQntd()<< "/" << i1.getPreco()<<endl;

		cout << "Invoice Amount Produto 1:  " << i1.getInvoiceAmount() << endl;

		cout << "Produto 2: "<< i2.getNumero() << "/" << i2.getDescricao() <<"/" <<i2.getQntd()<< "/" << i2.getPreco()<<endl;

		cout << "Invoice Amount Produto 1:  " << i2.getInvoiceAmount() << endl;
		return 0;
	}
};


int main(){

	InvoiceTest i;

	i.main();
}