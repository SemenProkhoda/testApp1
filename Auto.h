#pragma once
#include <iostream>
#include <string>
#include <vector>

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
	void setName(string Name) {
		this->Name = Name;
	}
	void setName() {
		cout << "Name: "; 
		cin.ignore();
		getline(cin, Name);
	}
	int getJahr() {
		return Jahr;
	}
	void setJahr(int Jahr) {
		this->Jahr = Jahr;
	}
	void setJahr() {
		cout << "Jahr: ";
		cin >> Jahr;
	}
	string getFarbe() {
		return Farbe;
	}
	void setFarbe(string Farbe) {
		this->Farbe = Farbe;
	}
	void setFarbe() {
		cout << "Farbe: ";
		cin.ignore();
		getline(cin, Farbe);
	}
	int getPS() {
		return PS;
	}
	void setPS(int PS) {
		this->PS = PS;
	}
	void setPS() {
		cout << "PS: ";
		cin >> PS;
	}
	void getAuto() {
		cout << "Name: " << Name << "\nJahr: " << Jahr << "\nFarbe: " << Farbe << "\nPS: " << PS << "\n";
	}
	void setAuto() {
		setName();
		setJahr();
		setFarbe();
		setPS();
	}
};

string mlStr(string str, int ml) {
	string buf = str;
	for (int i = 0; i < ml; i++)
		str += buf;
	return str;
}

int szOf(int i) {
	int sz = 0;
	do {
		sz++;
		i = (i - (i % 10)) / 10;
	} while (i != 0);
	return sz;
}

void getVectorAuto(vector<Auto> Autos) {
	int MxSzName = 4, MxSzFarbe = 5, MxSzPS = 2;
	for (Auto a : Autos) {
		if (MxSzName < a.getName().size())
			MxSzName = a.getName().size();
		if (MxSzFarbe < a.getFarbe().size())
			MxSzFarbe = a.getFarbe().size();
		if (MxSzPS < szOf(a.getPS()))
			MxSzPS = szOf(a.getPS());
	}
	cout << "+----+" << mlStr("-", MxSzName) << "-+------+" << mlStr("-", MxSzFarbe) << "-+" << mlStr("-", MxSzPS) << "-+\n"
		<< "| ID |" << mlStr(" ", MxSzName - 4) << "Name | Jahr |" << mlStr(" ", MxSzFarbe - 5) << "Farbe |" << mlStr(" ", MxSzPS - 2) << "PS |\n"
		<< "+----+" << mlStr("-", MxSzName) << "-+------+" << mlStr("-", MxSzFarbe) << "-+" << mlStr("-", MxSzPS) << "-+\n";
	for (int i = 0; i < Autos.size(); i++) {
		cout << "|  " << i << " |" << mlStr(" ", MxSzName - Autos[i].getName().size()) << Autos[i].getName() << " | " << Autos[i].getJahr() << " |"
			<< mlStr(" ", MxSzFarbe - Autos[i].getFarbe().size()) << Autos[i].getFarbe() << " |" << mlStr(" ", MxSzPS - szOf(Autos[i].getPS()))
			<< Autos[i].getPS() << " |\n";
	}
	cout << "+----+" << mlStr("-", MxSzName) << "-+------+" << mlStr("-", MxSzFarbe) << "-+" << mlStr("-", MxSzPS) << "-+\n";
	system("pause");
}