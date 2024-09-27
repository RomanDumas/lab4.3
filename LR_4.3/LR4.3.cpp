#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double x_p, x_k, dx, a, b, c, F;
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "-----------" << endl;
	cout << "|    F    |" << endl;
		while (x_p <= x_k) {
			if (c <= 0 && a != 0) {
				F = -a * x_p * x_p;

			}
			else {
				if ((c > 0) && (a == 0)) {
					F = (a - x_p) / (c * x_p);

				}
				else {
					F = x_p / c;

				}
			}
			x_p = x_p + dx;
			
			cout << fixed;
			
			cout << "|" << setw(7) << F << " |" << endl;



		}
	cout << "-----------" << endl;
	return 0;
}