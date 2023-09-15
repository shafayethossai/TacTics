#include <bits/stdc++.h>
#include <string>
#define ll    long long
#define ull    unsigned long long int
#define    pb(x) push_back(x)
#define    ins(x) insert(x)
#define    mp make_pair
#define fastread()    (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main(){
    fastread();
	int ts;
	cin>>ts;

	while(ts--){
        string s1, s2 = "MANDZUKIC";
        int cnt=0, ans=0;
        cin>>s1;

        int len1 = s1.size(), len2 = s2.size();

        int i = 0, j = 0;

        while(i < len1){
            if (j == len2) {
                j = 0;
            }
            if(s1[i] == s2[j]){
                cnt++;
                ans = max(ans, cnt);
                j++;
            }
            else {
                cnt = 0;
                j = 0;
            }

            i++;
        }
        cout<<ans<<endl;
	}
    return 0;
}

