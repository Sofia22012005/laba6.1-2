//рекурсивний спосіб
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void random(int* b, int size, int i, int min, int max) {
	b[i] = min + rand() % (max - min + 1);
	if (i < size - 1)
		random(b, size, i + 1, min, max);
	else
		cout << endl;
}

void out_array(int* b, const int size, int i) {
	cout << setw(4) << b[i];
	if (i < size - 1)
		out_array(b, size, i + 1);
	else
		cout << endl;
}

int number_of(int* b, const int size, int i, int n) {
	if (i < size - 1) {
		if (!(b[i] % 2 != 0 && b[i] % 3 == 0))
			++n;
		number_of(b, size, i + 1, n);
	}
	else
		return n;

}

int sum_of(int* b, const int size, int i, int sum) {
	if (i < size - 1) {
		if (!(b[i] % 2 != 0 && b[i] % 3 == 0))
			sum += b[i];

		sum_of(b, size, i + 1, sum);

	}
	else
		return sum;

}

void zero(int* b, const int size, int i) {
	if (i < size - 1) {
		if (!(b[i] % 2 != 0 && b[i] % 3 == 0))
			b[i] = 0;

		zero(b, size, i + 1);
	}
	else
		cout << endl;

}

int main() {
	srand((unsigned)time(NULL));
	int min = 10;
	int max = 90;

	const int n = 21;
	int a[n];

	//random
	random(a, n, 0, min, max);
	out_array(a, n, 0);

	//number
	int number = number_of(a, n, 0, 0);
	cout << "\nNumber of elements: " << endl;
	cout << number << endl;
	//sum
	int sum_of_elem = sum_of(a, n, 0, 0);
	cout << "\n Sum of elements: " << endl;
	cout << sum_of_elem << endl;
	//changing
	zero(a, n, 0);
	out_array(a, n, 0);
	return 0;
}