#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;
    // stack は文字列型を入れておく
    stack<string> st;
    // 読み込む文字の並びが、かっこの前に文字が来るパターンもあるので、空文字をあらかじめ読み込んでおくことで、
    // 読み込みパターンにも対応する
    st.push("");

    set<char> cs;
    // 読み込んだsを一文字ずつ読んでいく
    for (char c : s) {
        // 読み込んだ文字が（なら、空文字列をPUSHする
        if (c == '(') {
            st.push("");
            // 読み込んだ文字が）なら
        } else if (c == ')') {
            for (char x : srt.top()) {
                cs.erase(x);
            }
            st.pop();
            // 読み込んだ文字が文字なら、
        } else {
            // すでにcが入っていたらだめ
            if (cs.count(c)) {
                cout << "No" << endl;
                return 0;
            }
            cs.insert(c);
            st.top() += c;
        }
    }
    cout << "Yes" << endl;
    return 0;
}