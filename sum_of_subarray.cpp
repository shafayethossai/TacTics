/*
You just need to output the sum of all subarray sum of the array.

Let's say array A = [1, 2, 3]
Subarrays are [1], [2], [3], [1, 2], [2, 3], [1, 2, 3]
Now our final answer will be 1 + 2 + 3 + 3 + 5 + 6 = 20
*/

#include <bits/stdc++.h>
using namespace std;

void solve () {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    long long totalSum = 0;

    for (int i = 0; i < N; i++) {
        totalSum += (long long)A[i] * (i + 1) * (N - i) % 1000000007;
    }

    cout << totalSum % 1000000007 << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve ();

    }

    return 0;
}
