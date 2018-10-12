#include <iostream>
using namespace std;
void print(int i, int n) {
	if (i>=0) {
		cout << (n-i) << endl;
		print(--i, n);
	}
}
int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n << endl;
	print(n-1, n);
	return 0;
}
