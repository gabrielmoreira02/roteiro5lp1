#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

class Empregado{
	string nome;
	string sobrenome;
	float salario;
public:
	Empregado(string n, string s, float p){
		nome = n;
		sobrenome = s;
		setSalario(p);
	}
	string getNome(){
		return nome;
	}
	string getSobrenome(){
		return sobrenome;
	}
	float getSalario(){
		return salario;
	}
	void setNome(string d){
		nome=d;
	}
	void setSobrenome(string m){
		sobrenome=m;
	}
	void setSalario(float a){
		if (salario>0){
			salario=a;
		}else{
			cout<<"Erro, o Salario deve ser um valor positivo"<<endl;
		}
	}

};

class EmpregadoTest{
public:
	int main(){
		Empregado e1("Gabriel", "Moreira", 100), e2("Lucas", "Moreira", 250.5);
		cout << "Funcionario:  " <<e1.getNome() << " " << e1.getSobrenome() <<"    Salario: " << e1.getSalario() <<" Anual:  " << e1.getSalario()*12<<endl;
		cout << "Funcionario:  " <<e2.getNome() << " " << e2.getSobrenome() <<"    Salario: " << e2.getSalario() <<" Anual:  " << e2.getSalario()*12<<endl;

		e1.setSalario(e1.getSalario()*1.1);
		e2.setSalario(e2.getSalario()*1.1);
		cout<< endl << endl << "Aumentando 10% de salario"<< endl;
		cout << "Funcionario:  " <<e1.getNome() << " " << e1.getSobrenome() <<"    Salario: " << e1.getSalario() <<" Anual:  " << e1.getSalario()*12<<endl;
		cout << "Funcionario:  " <<e2.getNome() << " " << e2.getSobrenome() <<"    Salario: " << e2.getSalario() <<" Anual:  " << e2.getSalario()*12<<endl;
	

		cout<< endl << endl << "Modificando dados com os metodos Set"<< endl;

		e1.setNome("Julio");
		e1.setSobrenome("Bezerra");
		e1.setSalario(1250);
		e2.setNome("Vinicius");
		e2.setSobrenome("Bezerra");
		e2.setSalario(3420);
		cout << "Funcionario:  " <<e1.getNome() << " " << e1.getSobrenome() <<"    Salario: " << e1.getSalario() <<" Anual:  " << e1.getSalario()*12<<endl;
		cout << "Funcionario:  " <<e2.getNome() << " " << e2.getSobrenome() <<"    Salario: " << e2.getSalario() <<" Anual:  " << e2.getSalario()*12<<endl;
	
	}

};


int main(){

	EmpregadoTest i;

	i.main();
}