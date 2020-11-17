#include <iostream>
#include <string>

using namespace std;

int main(){
	cout << "Please give me your sname and name:\n";

	string sname;
	string name;
	cin >> sname;
	cin >> name;

	cout << "Please give me your age:\n";
	int age;
	cin >> age;


	cout << "Your name is '" << sname << " " << name << "'\n";
	cout << "Your age is '" << age << "' and next year you will be '" << age +1 << "'\n";
}  