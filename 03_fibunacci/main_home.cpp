#include <iostream>		//Einbinden der Bibliothek  iostream

using namespace std;	//Nutzung des standard Namensraum von C++, Alternativ kann "std:" vor jedes Komando gesetzt werden

void print_fibunacci(int n, int f_1, int f_2);  //Dekleration der Funktion print_fibunacci

int main (){	
	int n = 0;						//Dekleration der Variablen n
	cout << "Give me the numbers of elements:\n";		//Aufforderung der Eingabe 
	cin >> n;						//Eingabe der Anzahl der Fibunacci-Folge

	int f_1;						//Deklarierung der beiden Variablen für den Anfang der Fibunacci Folge für die Übergabe
	int f_2;

	cout << "starting value f_1:";
	cin >> f_1;
	cout << "starting value f_2:";
	cin >> f_2;

	print_fibunacci(n, f_1, f_2);			//Aufruf der Funktion mit dem Wert Variablen n, f_1 und f_2
}

void print_fibunacci(int n, int f_1, int f_2){

	for (int i = 0; i < n; ++i) { 		//For Schleife;  ++i zählt um eins hoch 
		cout << "f("<< i+1 << ") = " << f_1 << "\n"; 	//Anzeige der Fibunacci Folge

		int f_tmp = f_1+f_2;			//Berechnung des nächsten Wertes der Fibunacci-Folge
		f_1 = f_2;						//Umschreiben der alten f_2 Werte auf die neuen f_1 Werte
		f_2 = f_tmp;					//Umschreiben des neu Berechneten Wertes auf den f_2 Wert
	}
}