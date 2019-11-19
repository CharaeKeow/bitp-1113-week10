/*Week 10 - Self Review Question 1. Find the output of the following code
*/

#include <iostream>
using namespace std;

void funA(int Ary1[], char Ary2[]);
void funB(char grade, int& A, int& B, int& C, int& D, int& F);

int main() {
	int Ary1[10] = { 85,72,61,45,50,53,55,86,66,33 };
	char Ary2[10];
	int i, A = 0, B = 0, C = 0, D = 0, F = 0;

	funA(Ary1, Ary2);
	cout << "\n\n";
	for (i = 0; i < 10; i++) {
		cout << Ary1[i] << ", ";
		funB(Ary2[i], A, B, C, D, F);
	}

	cout << "\n\n A : " << A << "\n B : " << B << "\n C : " << C << "\n D : "
		<< D << "\n F : " << F << "\n\n";

	return 0;
}

void funA(int Ary1[], char Ary2[]) {
	for (int i = 0; i < 10; i++) {
		if (Ary1[i] >= 75) {
			Ary2[i] = 'A';
		}
		else if (Ary1[i] >= 60 && Ary1[i] < 75) {
			Ary2[i] = 'B';
		}
		else if (Ary1[i] >= 50 && Ary1[i] < 60) {
			Ary2[i] = 'C';
		}
		else if (Ary1[i] >= 40 && Ary1[i] < 50) {
			Ary2[i] = 'D';
		}
		else if (Ary1[i] >= 0 && Ary1[i] < 40) {
			Ary2[i] = 'F';
		}
	}
}

void funB(char grade, int& A, int& B, int& C, int& D, int& F) {
	if (grade == 'A') {
		A++;
	}
	else if (grade == 'B') {
		B++;
	}
	else if (grade == 'C') {
		C++;
	}
	else if (grade == 'D') {
		D++;
	}
	else if (grade == 'F') {
		F++;
	}
}
