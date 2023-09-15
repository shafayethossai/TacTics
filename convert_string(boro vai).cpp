#include <bits/stdc++.h>
#include <string>
#define ll    long long
#define ull    unsigned long long int
#define    pb(x) push_back(x)
#define    ins(x) insert(x)
#define    mp make_pair
#define fastread()    (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


vector <string> extractWords(string line) {
    int len = line.size();
    string s = "";

    vector <string> words;

    for (int i = 0; i < len; i++) {
        if(line[i] >= 'a' && line[i] <= 'z') {
            s+=line[i];
        }
        else {
            words.push_back(s);
            s = "";
        }
    }

    if(s.size() > 0) {
        words.push_back(s);
    }

    return words;
}

string makeUpperCase(string s, int i, int j) {
    while(i <= j) {
        s[i] = s[i] - 'a' + 'A';
        i++;
    }

    return s;
}

string convert(string s, bool flag) {
    int n = s.size();
    if (n % 2 == 0) {
        if (flag) return makeUpperCase(s, 0, (n/2)-1);
        else return makeUpperCase(s, n/2, n-1);
    }

    if (n % 2 == 1) {
        if (flag) return makeUpperCase(s, 0, n/2);
        else return makeUpperCase(s, (n/2)+1, n-1);
    }
    return s;
}

int main(){
    fastread();
    string line;

    cin.ignore();
    getline(cin, line);

        vector <string> words = extractWords(line);

        bool flag = true;

        int n = words.size();
        for (int i = 0; i < n; i++) {
            string s = convert(words[i], flag);
            flag = !flag;

            if (i == n-1) cout<<s<<endl;
            else cout<<s<<" ";
        }

    return 0;
}
