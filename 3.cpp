#include <iostream>
using namespace std;
	int main () {
	int X, Y, Z;
	cin >> X >> Y >> Z;
	if ((X > Y) && (Y > Z)) {
	cout << 2*X << endl;
	cout << 2*Y << endl;
	cout << 2*Z << endl;
	} else { 
	cout << abs(X) << endl;
	cout << abs(Y) << endl;
	cout << abs(Z) << endl;
	}
	return 0;
}