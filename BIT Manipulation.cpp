#include <bits/stdc++.h>
using namespace std;

int getBit (int n, int pos) {
    return ((n & (1<<pos)) != 0); // binary of 5 = 0101
}

int setBit (int n, int pos) {
    return ((n | (1<<pos))); // binary of 5 = 0101
}
int clearBit (int n, int pos) {
    int mask = ~(1<<pos);// binary of 5 = 0101
    return (n & mask);
}
int updateBit (int n, int pos, int value) {
    int mask = ~(1<<pos);// binary of 5 = 0101
    n = n & mask;
    return (n | value << pos);
}

int main() {
    cout << "GetBit : " << getBit(5, 2) << endl;
    cout << "SetBit : " << setBit(5, 1) << endl;
    cout << "clearBit : " << clearBit(5, 0) << endl;
    cout << "UpdateBit : " << updateBit (5, 1, 1) << endl;

    return 0;
}
