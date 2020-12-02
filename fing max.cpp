#include <bits/stdc++.h>
using namespace std;
int main() {
    string str; 
    while (cin >> str) {
        int sLen = str.size();
        char mx = '\0';
        for (int i = 0; i < sLen; i++) mx = max(mx, str[i]);
        for (int i = 0; i < sLen; i++) {
            cout << str[i];
            if (str[i] == mx) cout << "(max)";
        }
        cout << endl;
    }
    return 0;
}
