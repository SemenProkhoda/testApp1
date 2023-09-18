#include <iostream>
#include <string>

using namespace std;

class Auto {
private:
	string Name;
	int Jahr;
	string Farbe;
	int PS;
public:
	Auto() {
		Name = "PORSCHE 918 Spyder";
		Jahr = 2014;
		Farbe = "grey";
		PS = 886;
	}
	Auto(string Name, int Jahr, string Farbe, int PS) {
		this->Name = Name;
		this->Jahr = Jahr;
		this->Farbe = Farbe;
		this->PS = PS;
	}
	string getName() {
		return Name;
	}
	int getJahr() {
		return Jahr;
	}
	string getFarbe() {
		return Farbe;
	}
	void setFarbe(string Farbe) {
		this->Farbe = Farbe;
	}
	int getPS() {
		return PS;
	}
	void setPS(int PS) {
		this->PS = PS;
	}
	void getAuto() {
		cout << "Name: " << Name << "\nJahr: " << Jahr << "\nFarbe: " << Farbe << "\nPS: " << PS << "\n";
	}
};