#include <iostream>
using namespace std;
int base1;
void power(int base2, int index) {
		if (index <= 1) {
			cout << "Output: " << base << endl;
		else { 
			power(base1*base2,--index); << endl;
		}
}
int main() {
	int base, index;
	cout << "Enter Base:";
	cin >> base << endl;
	base1 = base;
	cout << "Enter Index: ";
	cin >> index << endl;
	power(base, index);
	return 0;
}
