#include <iostream>
#include "sir.h"
using namespace std;

int main() {
	int contor = 0;
	char secv[100];
	char subsir[10];
	cout << "Intorduceti secventa: ";
	cin.get(secv, 100);
	cin.get();
	cout << "Introduceti secventa cautata: ";
	cin.get(subsir, 10);
	cin.get();

	if (verificare_secv(secv, subsir, contor)==0)
		cout << "Secventa nu a fost gasita";
	else 
		cout<< "Secventa a fost gasita de "<<contor<< " ori" ;


	return 0;
}