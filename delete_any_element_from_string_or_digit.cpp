// delete any number/character from any digit or any number,
#include <bits/stdc++.h>
using namespace std;

#define    ll long long

int main () {
    ll a, b, c;
    string s1, s2, s3;
    cin >> a >> b;
    c = a + b;

    s1 = to_string(a);
    s2 = to_string(b);
    s3 = to_string(c);

    s1.erase( remove (s1.begin(), s1.end(), '0'), s1.end()) ;
    s2.erase( remove (s2.begin(), s2.end(), '0' ), s2.end()) ;
    s3.erase( remove (s3.begin(), s3.end(), '0' ), s3.end()) ;

    if (stoi(s1) + stoi(s2) == stoi(s3))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}
