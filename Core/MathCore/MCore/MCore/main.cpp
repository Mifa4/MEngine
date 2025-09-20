#include <iostream>
#include <cstring>

using namespace std;

int* ArrInv(int numberArr[],int size) {
	for (int num = 0;num < size;num++)
		numberArr[num] = -numberArr[num];
	return numberArr;
}

int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int* res = ArrInv(a, 9);
	return 0;
}