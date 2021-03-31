#include <iostream>
using namespace std;
int main() {
	int n, reverse = 0;
	cin >> n;
	while (n) {
		reverse = reverse * 10 + n % 10;
		n /= 10;
	}
	cout << reverse << endl;
	return 0;
}