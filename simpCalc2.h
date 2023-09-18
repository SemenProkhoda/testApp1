#include <iostream>
#include <string>

using namespace std;

bool ifZahl(char ch) {
	for (int i = 48; i < 58; i++) {
		if (ch == i) {
			return true;
		}
	}
	return false;
}

void simpCalc2() {
	int x = 0, y = 0;
	char op = NULL;
	string str;
	getline(cin, str);
	for (char ch : str) {
		if (ifZahl(ch) && op == NULL) {
			x *= 10;
			x += ch - '0';
		}
		else if (!ifZahl(ch)) {
			switch (ch)
			{
			case '+':
				op = ch;
				break;
			case '-':
				op = ch;
				break;
			case '*':
				op = ch;
				break;
			case ' ':
				break;
			default:
				op = '?';
				break;
			}
		}
		else if (ifZahl(ch) && op != NULL) {
			y *= 10;
			y += ch - '0';
		}
	}
	cout << x << " " << op << " " << y << " = ";
	switch (op)
	{
	case '+':
		cout << x + y;
		break;
	case '-':
		cout << x - y;
		break;
	case '*':
		cout << x * y;
		break;
	default:
		break;
	}
}