int N; string S;

void main() {
    cin >> N >> S;
    int cnt = 0, pre = 0;
    rep (i, 0, N) {
        if (S[i] == '(') cnt++;
        else {
            cnt--;
            if (cnt < 0) pre = max(pre, -cnt);
        }
    }
    rep (i, 0, pre) S = '(' + S;
    N += pre;

    cnt = 0;
    rep (i, 0 , N) {
        if (S[i] == '(') cnt++;
        else cnt--;
    }
    rep (i, 0, cnt) S = S + ')';

    cout << S << endl;
}