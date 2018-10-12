#include <iostream>
using namespace std;
void totalsum(int sum, int n) {
	if (n-1 >= 0) {
	sum += n;
	totalsum(sum, --n);
	}
	else {
		cout << "Sum= "<< sum;
	}
}
int main() {
	int sum = 0, n;
	cout << "Enter a number: ";
	cin >> n;
	totalsum(sum, n);
	return 0;
}
