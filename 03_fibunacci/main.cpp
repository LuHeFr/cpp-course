#include <iostream>		//Einbinden der Bibliothek  iostream

using namespace std;	//Nutzung des standard Namensraum von C++, Alternativ kann "std:" vor jedes Komando gesetzt werden

void print_fibunacci(int n);		//Deklaration der der Funktion 


int main (){	
	print_fibunacci(10);			//Aufruf der Funktion mit dem Wert n=10
}

void print_fibunacci(int n){
	int f_1=1;						//Deklarierung der beiden Variablen für den anfang der Fibunacci Folge
	int f_2=1;

	for (int i = 0; i < n; ++i) { 	//For Schleife;  ++i zählt um eins hoch 
		cout << "f("<< i+1 << ") = " << f_1 << "\n"; 

		int f_tmp = f_1+f_2;
		f_1 = f_2;
		f_2 = f_tmp;
	}
}