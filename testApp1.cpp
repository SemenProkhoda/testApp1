#include <iostream>
#include <vector>
#include "Auto.h"
#include "menus.h"

using namespace std;

int main() {
	Auto a1;
	Auto a2("Porsche 911 GT3 RS", 2023, "orange", 820);
	vector<Auto> Autos;
	Autos.push_back(a1);
	Autos.push_back(a2);
	menuAutos(Autos);

	return 0;
}

