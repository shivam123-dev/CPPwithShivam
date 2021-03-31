#include <iostream>
using namespace std;
int main() {
	int initialNumber, sum = 0;
	cin >> initialNumber;
	int a = initialNumber;
	while (initialNumber) {
		sum = (sum * 10) + (initialNumber % 10);
		initialNumber /= 10;
	}
	if (sum == a) {
		cout << a << " palindrome number." << endl;
	}
	else {
		cout << a << " not palindrome number." << endl;
	}
	return 0;
}