#include <iostream>
using namespace std;
int main() {
  int n, a, b, c;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    cin >> b;
    cin >> c;

    if (a >= b && a >= c) {
      if (b >= c)
        cout << b << endl;
      else
        cout << c << endl;
    }
    if (b >= a && b >= c) {
      if (a >= c)
        cout << a << endl;
      else
        cout << c << endl;
    }
    if (c >= a && c >= b) {
      if (a >= b)
        cout << a << endl;
      else
        cout << b << endl;
    }
  }
  return 0;
}