/*******************************
* Автор: Лучникова София       *
* Задание: Циклы с ветвлениями *
* Вариант: 15                  *
* *****************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double l, p, p_1, h, F, K, Reactions, angle_fe;
	//i set the max number of variable‑peak for the cycle "for"
	int stepCount = 4;

	//displaying the text "a=" on the user's screen and entering the value from the keyboard
	cout << "p = ";
	cin >> p;

	cout << "p_1 = ";
	cin >> p_1;

	cout << "h = ";
	cin >> h;

	cout << "F = ";
	cin >> F;

	for (int stepIndex = 0; stepIndex < stepCount; ++stepIndex) {

		//we add constants to the branch - case
		switch (stepIndex) {
		case 0:
			l = 0.9;
			break;

		case 1:
			l = 1.0;
			break;

		case 2:
			l = 1.5;
			break;

		case 3:
			l = 2.0;
			break;
		}
	
		K = (l / h) - sqrt(p / p_1);

		//we are checking the condition for K
		if (K > 0) {
			Reactions = l * 100 * F * p_1 * ((sqrt(p / p_1)) - 1.0);
			angle_fe = acos((h / l) * sqrt(p / p_1));
		}

		else if (K < 0){
			Reactions = l * 100 * F * p_1 * (((h * p) / (l * p_1)) - 1.0);
			angle_fe = 0;
		}

		//we fix three digits after the point
		cout << fixed << setprecision(3);
		//we display the obtained values ​​of speed and mass in the console
		cout << Reactions << setw(15) << K << setw(15) << angle_fe << endl;

	}
	
	return 0;
}

