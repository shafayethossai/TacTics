#include <bits/stdc++.h>
using namespace std;

#define MAX 500

int multiply(int x, int res[], int res_size) {
	int carry = 0;

	for (int i = 0; i < res_size; i++) {
		int product = res[i] * x + carry;
		res[i] = product % 10;
		carry = product / 10;
	}

	while (carry > 0) {
		res[res_size] = carry % 10;
		carry = carry / 10;
		res_size++;
	}
	return res_size;
}

void factorial(int n) {
	int res[MAX], res_size = 1;
	res[0] = 1;

	for (int x = 2; x <= n; x++) {
		res_size = multiply(x, res, res_size);
    }
	cout << "Factorial of given number is : ";

	for (int i = res_size - 1; i >= 0; i--) {
		cout << res[i];
    }
    cout << endl;
}

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        factorial(n);
    }
	return 0;
}
