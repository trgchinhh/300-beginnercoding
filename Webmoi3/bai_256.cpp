#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

using ll = long long;
using namespace std;

const int C_MAX = 1e5, C_MIN = -1e5, c_INF = 1e9;

bool snt(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int sum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;        
    }
    return sum;
}

bool isSmith(int n){
    if(n < 2 || snt(n)) return false; 
    int tong_chuso = sum(n);
    int tong_thuaso = 0;
    int tmp = n;
    for(int i = 2; i * i <= tmp; i++){
        while(n % i == 0){
            tong_thuaso += sum(i);
            n /= i;
        }
    }
    if(n > 1) tong_thuaso += sum(n);
    return tong_chuso == tong_thuaso;
}

void c_solve(void){
    int t; cin >> t;
    vector<int> result;
    while(t--){
        int x; cin >> x;
        if(isSmith(x)) result.pb(x);
    }
    if(result.empty()) cout << "-" << endl;
    else {
        for(int x : result) cout << x << " ";
        cout << endl;
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}