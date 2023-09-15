#include <bits/stdc++.h>
using namespace std;

#define    ll long long
#define    ull unsigned long long int

#define    pb push_back
#define    pf push_front
#define    pp pop_back()
#define    ppf pop_front
#define    mp make_pair
#define    ff first
#define    ss second
#define    revers(v) reverse(v.begin(),v.end())
#define    sort(v) sort(v.begin(),v.end())
#define    setp(n) fixed << setprecision(n)
#define    for0(n) for (int i = 0; i < n; i++)
#define    for1(n) for (int i = 1; i <= n; i++)
#define    for11(n) for (int i = 1; i<n; i++)
#define    loop(a, b) for (int i = a; i < b; i++)
#define    bloop(a, b) for (int i = a; i >= b; i--)

#define    yes cout<<"YES"<<endl
#define    no cout<<"NO"<<endl
#define    fr cout<<"First"<<endl
#define    sc cout<<"Second"<<endl
#define    mem(x,y) memset(x,y,sizeof(x))



#define    ERR 1e-9
#define    pi (2*acos(0))
#define    PI 3.141592653589793
#define    MOD 1000000007
#define    infinity 1e10
#define    inf  0x3f3f3f3f


#define    ugly 859963392
#define    lbs(x,num)    lower_bound(x.begin(),x.end(),num)
#define    ubs(x,num)    upper_bound(x.begin(),x.end(),num)
#define    Test_Case    int t;cin>>t;while(t--)
#define    fastread()    (ios_base:: sync_with_stdio(false),cin.tie(NULL));

//***************************************************************************************************************************//
//**********************************************************SHAFAYET DEFINED*********************************************************//


bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int fact(int n) {
    if(n==1) {
        return 1;
    }

    return n*fact(n-1);
}

ll gcd(ll a, ll b) {
    if(b == 0)return a;
    else return gcd(b, a%b);
}

ll lcm (ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

ll sum(ll n) {
    return (n * (n+1LL)) / 2LL;
}


int main () {
    fastread();
    int n, k;
    cin >> n >> k;
    int p[n], t[n];

    for (int i = 0; i < n; i++) {
        cin >> p[i] >> t[i];
    }
    map <char,int> mp;
    char ch;

    for (int i = 0; i < n; i++) {
        mp[p[i]]++;

        if (k - 1 == i) {
            ch = p[i];
        }
    }

    for (auto it : mp) {
        if (it.first == ch) {
            cout << it.second << endl;
            break;
        }
    }



    return 0;
}
