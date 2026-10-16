/********************************
* Автор: Лучникова София        *
* Задание: Циклы с ветвлениями  *
* Вариант: 15                   *
* ******************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double l, p, p1, h, F, K, R, fi;
	//i set the max number of variable‑peak for the cycle "for"
	int StepCount = 4;
	int Width = 15;
	int NumberOfDigitsAfterPoint = 3;

	//displaying the text "a=" on the user's screen and entering the value from the keyboard
	cout << "p = ";
	cin >> p;

	cout << "p1 = ";
	cin >> p1;

	cout << "h = ";
	cin >> h;

	cout << "F = ";
	cin >> F;

	for (int StepIndex = 0; StepIndex < StepCount; ++StepIndex) {
		cout << "l = ";
		cin >> l;

		K = (l / h) - sqrt(p / p1);

		if (K > 0) {
			R = l * 100.0 * F * p1 * ((sqrt(p / p1)) - 1.0);
			fi = acos((h / l) * sqrt(p / p1));
		}
		else {
			R = l * 100.0 * F * p1 * (((h * p) / (l * p1)) - 1.0);
			fi = 0.0;
		}

		cout << fixed << setprecision(NumberOfDigitsAfterPoint);
		cout << R << setw(Width) << K << setw(Width) << fi << endl;
	}

	return 0;
}
