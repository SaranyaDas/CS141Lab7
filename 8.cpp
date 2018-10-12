#include <iostream>
using namespace std;
void sumdigits(int n, int sum) {
	if (n > 0) {
		sum += (n%10);
		n /= 10;
		sumdigits(n, sum);
	}
	else {
		cout << "Sum of digits= " << sum << endl;
	}
}
int main() {
	int n, sum = 0;
	cout << "Enter a number: ";
	cin >> n;
	sumdigits(n, sum);
	return 0;
}
