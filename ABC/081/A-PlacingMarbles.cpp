#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int s1,s2,s3;
//     int count = 0;
//     cin >> s1 >> s2 >> s3;

//     if (s1 == 1) {
//         count += 1;
//     } else if (s2 == 1) {
//         count += 1;
//     } else if (s3 == 1) {
//         count += 1;
//     }
//     cout << count << endl;
// }

int main() {
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i <3; i++) {
        if (s.at(i) == '1') {
            ans++;
        }
    }
    cout << ans << endl;
}