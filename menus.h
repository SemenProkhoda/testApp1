#pragma once
#include <iostream>
#include <vector>
#include "Auto.h"

using namespace std;

void menuAuto(Auto &A) {
	int mN;
	system("cls");
	A.getAuto();
	cout << "\nmenu Auto:\n"
		<< "1.set Name\n"
		<< "2.set Jahr\n"
		<< "3.set Farbe\n"
		<< "4.set PS\n"
		<< "0.menu Autos\n"
		<< "-->";
	cin >> mN;
	switch (mN)
	{
	case 0:
		return;
		break;
	case 1:
		A.setName();
		menuAuto(A);
		break;
	case 2:
		A.setJahr();
		menuAuto(A);
		break;
	case 3:
		A.setFarbe();
		menuAuto(A);
		break;
	case 4:
		A.setPS();
		menuAuto(A);
		break;
	default:
		cout << "err!\n";
		system("pause");
		menuAuto(A);
		break;
	}
}

void menuAutos(vector<Auto> Autos) {
	int mN;
	Auto bufA;
	int bufID;
	system("cls");
	cout << "menu Autos:\n"
		<< "1.zeigen Autos\n"
		<< "2.wahlen Auto\n"
		<< "3.hinzufuengen Auto\n"
		<< "0.exit\n"
		<< "-->";
	cin >> mN;
	switch (mN)
	{
	case 0:
		return;
		break;
	case 1:
		getVectorAuto(Autos);
		menuAutos(Autos);
		break;
	case 2:
		do {
			cout << "input ID: ";
			cin >> bufID;
			if (bufID >= Autos.size()) 
				cout << "max ID: " << Autos.size() - 1 << "\n";
		} while (bufID >= Autos.size());
		menuAuto(Autos[bufID]);
		menuAutos(Autos);
		break;
	case 3:
		bufA.setAuto();
		Autos.push_back(bufA);
		menuAutos(Autos);
		break;
	default:
		cout << "err!\n";
		system("pause");
		menuAutos(Autos);
		break;
	}
}