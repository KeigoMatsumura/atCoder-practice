#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int x = 0;
  
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;

    if (s == "Y") {
        x = 1;
    }
  }
  
  if (x != 1) { 
    cout << "Three" << endl;
  } else {
    cout << "Four" << endl;
  }
}

