#include <iostream>

using namespace std;


int main()
{
	cout << "enter float x and y" << endl;
	double x, y;
	cin >> x >> y;
	cout << endl << "x=" << x << endl << "y=" << y << endl;
	// проверим начало координат
	if (x == 0 && y == 0)
		cout << endl << "This is Zero" << endl;
	else {
		if (x == 0 && y == 1)
			cout << endl << "You have win of X axis!" << endl;
		else {
			if (y == 0 && x == 1)
				cout << endl << "You have win of Y axis!" << endl;
			else {
				if (fabs(x) == 1 && fabs(y) == 1)
					cout << endl << "Wow! You are Great!" << endl;
				else {
					if (x * x + y * y > 1) // окружность
						cout << endl << "You loose, get Grey M5" << endl;
					else {
						if (y > x * x && y < 1)  // парабола
							cout << endl << "You have a shoot : Green M1!" << endl;
						else {
							if (x < 0 && y < 0)
								cout << endl << "You have a shoot : Blue M3!" << endl;
							else {
								if (y = -x && x > 0)
									cout << endl << "You have a shoot : Pink M2!" << endl;
								else {
									cout << endl << "You have a shoot : White M4!" << endl;
								}
							}
						}
					}
				}
				system("pause");
				return 0;
			}
		}
	}
}
 