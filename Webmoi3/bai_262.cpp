#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

using namespace std;

int reverseNumber(int n) {
    bool isNegative = (n < 0);
    n = abs(n);
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    if (isNegative) return -reversed;
    else return reversed;
}

void c_solve(void) {
    int t;
    cin >> t;
    vector<int> result;
    while (t--) {
        int x;
        cin >> x;
        result.pb(reverseNumber(x));
    }
    for (int x : result) cout << x << " ";
    cout << endl;
}

___TruongChinh304___ {
    fast_io;

    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}
