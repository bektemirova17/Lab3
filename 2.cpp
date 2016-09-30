#include <iostream>

using namespace std;
	int main () {
	int x, y, z;
	cin >> x >> y >> z;
	if (x < y < z) {
		cout << x;
	} else if (y < x < z) {
		cout << y;
	} else {
		cout << z;
	} 
	return 0;
}