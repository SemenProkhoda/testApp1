#include <iostream>

using namespace std;

void simpCalc() {
	int x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	char op;
	choose:
	cout << "choose: +, -, * : ";
	cin >> op;
	switch (op)
	{
	case '+':
		cout << x << " " << op << " " << y << " = " << x + y << "\n";
		break;
	case '-':
		cout << x << " " << op << " " << y << " = " << x - y << "\n";
		break;
	case '*':
		cout << x << " " << op << " " << y << " = " << x * y << "\n";
		break;
	default:
		cout << "err\n";
		goto choose;
		break;
	}
}