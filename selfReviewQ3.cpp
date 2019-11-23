/*Complete the program skeleton given in the lab module.
*/

#include <iostream>
using namespace std;

void printElement(int);
void average(int [], int row);
void updateQuantity(int[][3]);

void main() {
	int quantity[5][3] = { {30, 25, 18}, {16, 21, 51}, {19, 42, 25}, {35, 26, 38}, {16, 33, 22} };
	cout << "\n\n The original elements in quantity: \n";

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			printElement(quantity[i][j]);
		}
		cout << "\n";
	}

	for (int i = 0; i < 5; i++) {
		average(quantity[i], i);
	}

	updateQuantity(quantity);
	
	//Print the updated quantity by reuse the printElement function
	cout << "\n\nThe updated elements in the array is as the following: " << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			printElement(quantity[i][j]); 
		}
		cout << "\n";
	}
}

void printElement(int quant) {
	cout << " " << quant;
}

void average(int quantityRow[], int row) {
	int total = 0, ave;

	for (int i = 0; i < 3; i++) {
		total += quantityRow[i];
	}
	ave = total / 3;

	cout << "\n The average value of the elements in row "
		 << row + 1 << " : " << ave;
}

void updateQuantity(int newQuantity[][3]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			newQuantity[i][j] = newQuantity[i][j] + 20;
		}
	}
}
