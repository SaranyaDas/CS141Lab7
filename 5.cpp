#include <iostream>
using namespace std;
void oddeven(int type, int n, int sum) {
	if (type <= n) {
		sum += type;
		oddeven((++(++type)), n, sum);
	}
	else {
		cout << "Sum = "<< sum << endl;
	}
}
int main() {
	int type, n, sum;
	cout << "Enter 0 for EVEN or 1 for ODD: ";
	cin >> type;
	cout << "Enter terminating number: ";
	cin >> n;
	oddeven(type, n, sum);
	return 0;
}
