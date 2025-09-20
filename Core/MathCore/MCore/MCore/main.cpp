#include <iostream>

using namespace std;

int* ArrInv(int numberArr[], int size) {
	for (int num = 0;num < size;num++)
		numberArr[num] = -numberArr[num];
	return numberArr;
}

int ArrSum(int numberArr[], int size) {
	int res = 0;
	for (int num = 0; num < size; num++)
		res += numberArr[num];
	return res;
}

int ArrMul(int numberArr[], int size) {
	int res = 0;
	for (int num = 0; num < size; num++)
		res *= numberArr[num];
	return res;
}

int ArrD(int numberArr[], int size) {
	int res;
	if (size > 1)
		res = numberArr[0] /= numberArr[1];
	for (int num = 1; num < size-1; num++)
		res = res /= numberArr[num + 1];
	return res;
}

int Deg(int a, int b) {
	int res;
	if (b == 0)
		return 0;
	else
		res = a * a;
	for (int i = 1; i <= b; i++) {
		res = res * a;
	}
	return res;
}

int DDR(int res, int to) {
	int i = 1;
	while (i <= 100) {
		if (Deg(10,i) % res == 0) {
			return (10 * i);
		}
		i++;
	}
	return -2401201;
}

int* DWR(int num1, int num2) {
	int _int = num1 / num2;
	int res[] = { _int,0,0 };
	if (num1 % num2 == 0) {
		return res;
	}
	if (num2 % 2 == 0 or num2 % 5 == 0) {
		if (num2 % 3 != 0 and num2 % 7 != 0 and num2 % 9 != 0) {
			int i = DDR(num1, num2);
			res[1] = num1;
			res[2] = i;
			return res;
		}
		else
			goto Rem;
	}
	else {
	Rem:
		res[1] = num1 % num2;
		res[2] = num2;
		return res;
	}
}

int main() {
	int* _int = DWR(5, 5);
	for(int b = 0; b < 3; b++)
		cout << _int[b];
	return 0;
}