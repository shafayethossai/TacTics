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

******************************************Another Tricks**************************************************
first one increasing order, if first value same then second one will be decreasing

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool compare(pair<ll, ll> a, pair<ll, ll> b) {
    if (a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        ll n;
        scanf("%lld", &n);

        vector<pair<ll, ll>> v(n);

        for (int i = 0; i < n; i++) {
            scanf("%lld %lld", &v[i].first, &v[i].second);
        }

        sort(v.begin(), v.end(), compare);

        for (int i = 0; i < n; i++) {
            printf("%lld %lld\n", v[i].first, v[i].second);
        }
    }

    return 0;
}


