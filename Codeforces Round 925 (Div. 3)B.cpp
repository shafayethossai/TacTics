// we have given a array of length n. here we have to check can we balance the all tunky of water.
// Codeforces Round 925 (Div. 3) B


#include <bits/stdc++.h>
using namespace std;

int main () { int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    long long sum = 0;
    for (auto& x : a) {
      cin >> x;
      sum += x;
    }
    bool good = true;
    long long has = 0;
    long long need = sum / n;
    for (auto x : a) {
      if (x + has < need) {
        good = false;
        break;
      }
      has = x + has - need;
    }
    cout << (good ? "YES" : "NO") << '\n';
  }
  return 0;
}
