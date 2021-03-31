#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, n, sum = 0;
	cin >> n;
	a = n;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	if (pow(sum, 3) == a) {
		cout << "Armstrong Number" << endl;
	}
	else {
		cout << "Not Armstrong Number" << endl;
	}
	return 0;
}