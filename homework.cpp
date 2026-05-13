#include <iostream>

using namespace std;

int main(){
	//task 1
	/*
	const int size = 4;
	int array[size][size];
	int start; 

	cout << "Enter the beginning of the array: ";
	cin >> start;

	int value = start;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			array[i][j] = value;
			value *= 2;
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << array[i][j] << '\t';
		}
		cout << '\n';
	}
	*/
	//task 2
	/*
	const int size = 4;
	int array[size][size];
	int start;

	cout << "Enter the beginning of the array: ";
	cin >> start;

	int value = start;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			array[i][j] = value;
			value++;
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << array[i][j] << '\t';
		}
		cout << '\n';
	}
	*/
	//task 3
	srand(time(0));
	const int ROWS = 2;
	const int COLS = 6;

	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	int shift;
	cout << "Enter shift: ";
	cin >> shift;

	for (int x = 0; x < shift; x++) {

		for (int i = 0; i < ROWS; i++) {

			int last = arr[i][COLS - 1];

			for (int j = COLS - 1; j > 0; j--) {
				arr[i][j] = arr[i][j - 1];
			}

			arr[i][0] = last;
		}
	}

	cout << "Result:\n";

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}