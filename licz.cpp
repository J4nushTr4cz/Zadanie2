#include "libPole.h"
#include "libPoleObj.h"
#include <iostream>
using namespace std;

int main() {
	float a;
	cout << "Program liczacy pole kwadratu oraz objetosc i pole calkowite szescianu" << endl;
	cout << "Podaj dlugosc boku: ";
	cin >> a;
	cout<<endl;
	Pole(a);
	PoleObj(a);
	cout <<"Koniec programu."<<endl;
}
