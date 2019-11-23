/*Array 2 Function Self Review Question 2
  Find the errors in the sample code given in the lab module.
  Then fix it and show the output.
*/

#include <iostream>
using namespace std;

void functionA(int num); //as we want to pass individual elements, remove []
void functionB(int newnumbers[]);
void functionC(int newnumbers[]);

void main() {
	int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i, j = 0, k = 0;

	for (i = 0; i < 10; i++) {
		functionA(numbers[i]); //passing individual elements
	}

	cout << "\n\n";
	functionB(numbers); //passing the whole array
	functionC(numbers); //passsing the whole array
}

void functionA(int num) {
	cout << num << " ";
}

void functionB(int newnumbers[]) {
	for (int i = 0; i < 10; i++) {
		newnumbers[i] = newnumbers[i] * 5;
	}
}

void functionC(int newnumbers[]) {
	for (int i = 0; i < 10; i++) {
		cout << newnumbers[i] << " ";
	}
}
