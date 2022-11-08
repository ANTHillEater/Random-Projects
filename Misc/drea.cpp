/*
	A C++ rendition of drea.c
	Written by Andrew Tesla
	February 2022
*/

#include <iostream>

using namespace std;

int main(void){
	double length = 0.0;
	int i;

	cout<<"How big your dick?"<<endl;
	cin>>length;

	if ((length == 69) || (length == 420) || (length == 69420) || (length == 42069)){
		cout<<"Nice."<<endl;
	}

	if (length <= 0){
		cout<<"This is a dick measuring program, I don't do coochies"<<endl;
	}
	else if (length <= 4) {
		cout<<"C";
		for (i = 1; i < length; i++) {
			cout<<"=";
		}
		cout<<"3"<<endl;

		cout<<"Damn, you shrimpy"<<endl;
	}
	else if (length <= 6) {
		cout<<"C";
		for (i = 1; i < length; i++) {
			cout<<"=";
		}
		cout<<"3"<<endl;

		cout<<"Aight, you average"<<endl;
	}
	else if (length <= 9) {
		cout<<"C";
		for (i = 1; i < length; i++) {
			cout<<"=";
		}
		cout<<"3"<<endl;

		cout<<"Fuck, you're huge!"<<endl;
	}
	else {
		cout<<"C";
		for (i = 1; i < length; i++) {
			cout<<"=";
		}
		cout<<"3"<<endl;

		cout<<"Nah, you lying"<<endl;
	}

	return 0;
}
