#include <bits/stdc++.h>
using namespace std;

#define    ll  long long

bool compare(const pair<int, int>&i, const pair<int, int>&j)  {
    return i.second < j.second;
}
int main () {
    int n;
    cin >> n;

    vector <pair<ll, ll>> v;

    for (int i=0; i<n; i++) {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    
    sort (v.begin(), v.end()); // first value accending order
    sort (v.begin(), v.end(), compare); // second value accending order
    

    for (auto it : v) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
