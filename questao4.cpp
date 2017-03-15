#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

class Pessoa{
	string nome;
	int idade;
	int telefone;
public:
	Pessoa(string n, int i, int t){
		nome = n;
		idade = i;
		telefone =t;
	}
	Pessoa(string n){
		nome=n;
		idade=0;
		telefone=0;
	}

	string getNome(){
		return nome;
	}
	int getIdade(){
		return idade;
	}
	int getTelefone(){
		return telefone;
	}
	void setNome(string d){
		nome=d;
	}
	void setIdade(int a){
		idade=a;
	}
	void setTelefone(int a){
		telefone=a;
	}

};

class EmpregadoTest{
public:
	int main(){
		Pessoa p1("Gabriel",15,99393493), p2("Lucas");

		cout << "Nome/Idade/Telefone (0 quando nao informado)"<<endl;
		cout << p1.getNome() << "/" << p1.getIdade() << "/" << p1.getTelefone() << endl;
		cout << p2.getNome() << "/" << p2.getIdade() << "/" << p2.getTelefone() << endl;

		cout << "Mudando valores usando metodo Set" << endl;

		p1.setNome("Joao");
		p1.setIdade(24);
		p1.setTelefone(99998555);
		p2.setNome("Augusto");
		p2.setIdade(45);
		p2.setTelefone(32466611);

		cout << "Nome/Idade/Telefone (0 quando nao informado)"<<endl;
		cout << p1.getNome() << "/" << p1.getIdade() << "/" << p1.getTelefone() << endl;
		cout << p2.getNome() << "/" << p2.getIdade() << "/" << p2.getTelefone() << endl;

	}

};


int main(){

	EmpregadoTest i;

	i.main();
}