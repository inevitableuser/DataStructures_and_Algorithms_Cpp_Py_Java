#include <iostream>
using namespace std;
class leadgame {
public:
};
int main() {
  int n, a = 0, b = 0, a1, b1, max = 0, worl;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a1;
    cin >> b1;

    a += a1;
    b += b1;

    if (a > b && (a - b) > max) {
      max = a - b;
      worl = 1;
    } else if (a < b && (b - a) > max) {
      max = b - a;
      worl = 2;
    }
  }
  cout << worl << " " << max << endl;
}