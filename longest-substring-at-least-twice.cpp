// Your task is to find the length of its longest substring that can be met in the string at least twice.These occurrences can overlap
// input : 1. abcd, 2. ababa, 3. zzz
// output : 1. 0, 2. 3, 3. 2
// CodeForces (23/A)

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s;
    cin >> s;
    map <string, int> mp;
    for (int i = 0; i < s.size(); ++i) {
        string temp="";

        for (int j = i; j < s.size(); ++j) {
            temp.push_back(s[j]);
            mp[temp]++;
        }
    }
    int mx = 0;
    for(auto it : mp){
        if(it.second >= 2)
            //cout << it.first<<" "<<(int)it.first.size()<<endl;
            mx = max(mx, (int)it.first.size());
    }
    cout << mx << endl;
}
int main(){
    testCase();

    return 0;
}
