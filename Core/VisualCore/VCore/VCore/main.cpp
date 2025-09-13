#include <iostream>

using namespace std;

int main() {
	system("chcp 1251");
	int a,c;
	char d;

	cout << "Number 1:\n";
	cin >> a;
	cout << "What operation need to do:\n";
	cin >> d;
	cout << "Number 2:\n";
	cin >> c;
	if (d == '+') {
		cout << a + c;
	}
	else if (d == '-') {
		cout << a - c;
	}
	else if (d == '*') {
		cout << a * c;
	}
	else if (d == ':') {
		cout << a / c;
	}
	else if (d == '^') {
		cout << (a + c) / 2;
	}
	return 0;
}

namespace VisualMethods {

}