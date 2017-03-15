#include <iostream>
#include <stdlib.h>

using namespace std;

class Data{
	int dia;
	int mes;
	int ano;
public:
	Data(int d, int m, int a){
		setDia(d);
		setMes(m);
		ano = a;
	}
	int getDia(){
		return dia;
	}
	int getMes(){
		return mes;
	}
	int getAno(){
		return ano;
	}
	void setDia(int d){
		if (d>=1 && d<=31){
			dia=d;
		}else{
			dia=1;
		}
	}
	void setMes(int m){
		if (m>=1&&m<=12){
			mes=m;
		}else{
			mes=1;
		}
	}
	void setAno(int a){
		ano=a;
	}
	void avancarDia(Data d1){
		if(d1.dia<30){
			dia=d1.dia+1;
		}else if(d1.mes<12){
			mes=d1.mes+1;
			dia=1;
		}else{
			dia=1;
			mes=1;
			ano=d1.ano+1;
		}
	}
};


class DataTest{
public:
	int main(){

		Data d1(31,12,1997);

		cout << d1.getDia() << "/" << d1.getMes() <<"/" <<d1.getAno()<<endl;
		d1.avancarDia(d1);
		cout << "Avancando o dia"<<endl;
		cout << d1.getDia() << "/" << d1.getMes() <<"/" <<d1.getAno()<<endl;
		d1.setDia(37);
		d1.setMes(15);
		d1.setAno(2010);
		cout << "Setando para um dia e mes invalidos(mostrar padrao)"<<endl;
		cout << d1.getDia() << "/" << d1.getMes() <<"/" <<d1.getAno()<<endl;

		return 0;
	}
};

int main(){

	DataTest d1;

	d1.main();

}
