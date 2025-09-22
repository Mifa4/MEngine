#include <iostream>

using namespace std;

//Array Invertor
int* ArrInv(int numberArr[], int size) {
	for (int num = 0;num < size;num++)
		numberArr[num] = -numberArr[num];
	return numberArr;
}
//Array Sum
int ArrSum(int numberArr[], int size) {
	int res = 0;
	for (int num = 0; num < size; num++)
		res += numberArr[num];
	return res;
}
//Array multiplication
int ArrMul(int numberArr[], int size) {
	int res = 0;
	for (int num = 0; num < size; num++)
		res *= numberArr[num];
	return res;
}
//Array Division
int ArrD(int numberArr[], int size) {
	int res;
	if (size > 1)
		res = numberArr[0] /= numberArr[1];
	for (int num = 1; num < size-1; num++)
		res = res /= numberArr[num + 1];
	return res;
}
//Degree
int Deg(int a, int b) {
	int res;
	if (b == 0)
		return 1;
	else
		res = a * a;
	for (int i = 2; i <= b; i++)
		res = res * a;
	return res;
}
//Division Degree to 10 for Fraction
int DDF(int res, int to) {
	int i = 1;
	while (i <= 9) {
		int Prom = Deg(10, i);
		if (Prom % res == 0) {
			return Prom;
		}
		i++;
	}
	return -2401201;
}
//Division with Fraction
int* DWF(int num1, int num2) {
	int _int = num1 / num2;
	int res[] = { _int,0,0 };
	if (num1 % num2 == 0) {
		return res;
	}
	if (num2 % 2 == 0 or num2 % 5 == 0) {
		if (num2 % 3 != 0 and num2 % 7 != 0 and num2 % 9 != 0) {
			int i = DDF(num1, num2);
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
//Touch Smaller check
bool TS(int number, int checkNumber) {
	if (checkNumber <= number)
		return true;
	return false;
}
//Touch Biggerer check
bool TB(int number, int checkNumber) {
	if (checkNumber >= number)
		return true;
	return false;
}
//Touch Equalas check
bool TE(int number, int checkNumber) {
	if (checkNumber == number)
		return true;
	return false;
}
//Object Touch Check
bool OTC(int borders[2], int checkBorders[2]) {
	if (borders[0] > borders[1])
		borders[0], borders[1] = borders[1], borders[0];
	if (checkBorders[0] > checkBorders[1])
		checkBorders[0], checkBorders[1] = checkBorders[1], checkBorders[0];
	if (TB(borders[0], checkBorders[1]) and TS(borders[0], checkBorders[0]))
		return true;
	if (TS(borders[1], checkBorders[0]) and TB(borders[1], checkBorders[1]))
		return true;
	return false;
}
//Arrray Sort Bubble From Small
int* ASBS(int arrToSort[], int size) {
	bool swaped;
	for (int i = 0; i < size; i++) {
		swaped = false;
		for (int b = 0; b < size - i; b++) {
			if (arrToSort[b] > arrToSort[b + 1]) {
				arrToSort[b], arrToSort[b + 1] = arrToSort[b + 1], arrToSort[b];
				swaped = true;
			}
		}
		if (!swaped)
			break;
	}
}

//Arrray Sort Bubble From Big
int* ASBB(int arrToSort[], int size) {
	bool swaped;
	for (int i = 0; i < size; i++) {
		swaped = false;
		for (int b = 0; b < size - i; b++) {
			if (arrToSort[b] < arrToSort[b + 1]) {
				swaped = true;
				arrToSort[b], arrToSort[b + 1] = arrToSort[b + 1], arrToSort[b];
			}
		}
		if (!swaped)
			break;
	}
	return arrToSort;
}

int main() {
	int* _int = DWF(10, 3);
	for (int b = 0; b < 3; b++) {
		cout << _int[b];
		cout << "\n";
	}
	return 0;
}