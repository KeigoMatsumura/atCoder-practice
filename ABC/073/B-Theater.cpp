#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int audience = 0;
  
  for (int i = 0; i < N; i++) {
    int l, r;
    cin >> l >> r;

    audience += r - l + 1;
  }
  cout << audience << endl;
}

