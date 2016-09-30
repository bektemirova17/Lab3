#include <iostream>

using namespace std;
	int main () {
	int x , y;
	cin >> x >> y;
	if (x <= y) {
		x = 0;
	} 
	cout << x << " " << y;
	return 0;
}