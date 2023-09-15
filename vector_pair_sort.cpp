#include <bits/stdc++.h>
using namespace std;

bool mycompare (pair<int, int> p1, pair <int, int> p2) {
    return p1.first < p2.first;
}

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) {
        return a.first < b.first;
    }
    else {
        return a.second > b.second;
    }
}

int main () {

    int tc;
    vector<pair<int, int>> v;
    cin >> tc;

    while (tc--) {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), cmp); // ascending order for v[i].first and descending order for v[i].second
    sort(v.begin(), v.end(), mycompare);// ascending order for v[i].first and ascending order for v[i].second

    for (int i=0; i<v.size(); i++) {
        cout << v[i].first<<" "<<v[i].second<<endl;
    }

    return 0;
}
