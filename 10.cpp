#include <iostream>
using namespace std;
void fibonacci(int n, int n1, int n2) {
	if (n == 1) {
		cout << "Desired Sequence Term: " << n1;
	}
	else {
		fibonacci(--n, n2, n1 + n2);
	}
}
int main() {
	int n1 = 1, n2= 1, n;
	cout << "Enter term position: ";
	cin >> n;
	fibonacci(n, n1, n2);
	return 0;
}
