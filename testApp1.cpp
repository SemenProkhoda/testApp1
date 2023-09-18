#include <iostream>
#include "Auto.h"

using namespace std;

int main() {
	Auto a1;
	a1.getAuto();

	Auto a2("Porsche 911 GT3 RS", 2023, "orange", 820);
	a2.getAuto();
	a2.setFarbe("red");
	a2.getAuto();

	return 0;
}

