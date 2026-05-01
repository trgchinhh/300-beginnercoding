#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()
#define fast_io ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

void process_array(const string& line) {
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) arr.push_back(num);
    int max_val = arr[0], min_val = arr[0];
    int max_pos = 0, min_pos = 0;
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_pos = i;
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_pos = i;
        }
    }
    cout << "Max: " << max_val << ", Vi tri Max: " << max_pos
         << "; Min: " << min_val << ", Vi tri Min: " << min_pos << endl;
}

void c_solve() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string line;
        getline(cin, line);
        process_array(line);
    }
}

___TruongChinh304___ {
    fast_io;
    c_solve();
    return 0;
}
