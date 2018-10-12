#include <iostream>
#include <cmath>
using namespace std;
void GCD(int x, int y, int z) {
	if (x%z == 0 && y%z == 0)
		cout << "HCF/GCD of the two numbers: " << z << endl;
	else {
		GCD(x, y, --z);
	}
}
int main() {
	int x, y, z;
	cout << "Enter two numbers: ";
	cin >> x >> y;
	z = min(x, y);
	GCD(x, y, z);
	return 0;
}
