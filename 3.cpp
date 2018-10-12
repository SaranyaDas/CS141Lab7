#include <iostream>
using namespace std;
void oddeven(int type, int n){
	if (type <= n) {
		cout << type << endl;
		oddeven(++(++type), n);
	}
}
int main() {
	int type, n;
	cout << "Enter 0 for EVEN or 1 for ODD: ";
	cin >> type;
	cout << "Enter terminating number: ";
	cin >> n;
	oddeven(type, n);
	return 0; 
}
