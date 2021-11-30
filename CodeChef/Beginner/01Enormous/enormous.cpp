#include <bits/stdc++.h>
using namespace std;
int main() {
  int x, y, z, count = 0;
  cin >> x;
  cin >> y;
  for (int i = 0; i < x; i++) {
    cin >> z;
    if (z % y == 0) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}