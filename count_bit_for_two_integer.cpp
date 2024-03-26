#include <bits/stdc++.h>
using namespace std;

int count_bit (int n) {
    int cnt=0;

    while (n > 0) {
        cnt += (n&1);
        n = n >> 1;
    }
    return cnt;
}

int main () {
    int tc;
    cin >> tc;

    while (tc--) {
        int a, b, cnt=0;
        cin >> a >> b;

        for (int i=a; i<=b; i++) {
            if ((i&1) == 0 && i < b) {
                cnt += 2 * count_bit(i) + 1;
                i++;
                continue;
            }
            cnt += count_bit(i);
        }
        cout << cnt << "\n";
    }


    return 0;
}

