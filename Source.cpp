//karina baslyk 21 11
#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
int main() {
	/*Matrix1.Даны целые положительные числа M и N.Сформировать целочисленную матрицу размера M × N, у которой все элементы I - й строки имеют
		значение 10·I(I = 1, . . ., M).*/
	const int n = 5;
	const int m = 4;
	int mas[n][m];
	for (int i = 0; i < n; i++) {//переключает номер строк
		for (int j = 0; j < m; j++) {//переключает номера столбцов
			mas[i][j] = 10 * 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mas[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}