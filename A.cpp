#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 0) {
        cout << (a > b ? "Takahashi" : "Aoki");
    } else {
        cout << (a < b ? "Aoki" : "Takahashi");        
    }
    cout << '\n';
    return 0;
}
