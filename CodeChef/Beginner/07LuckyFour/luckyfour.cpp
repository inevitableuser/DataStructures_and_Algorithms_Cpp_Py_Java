#include <iostream>
using namespace std;

class luckyfour {
public:
  int count(int x) {
    int count = 0, a;
    while (x != 0) {
      a = x % 10;
      if (a == 4) {
        count += 1;
      }
      x /= 10;
    }

    return count;
  }
};
int main() {
  int n, x;
  cin >> n;
  luckyfour lfobj = luckyfour();
  for (int i = 0; i < n; i++) {
    cin >> x;
    cout << lfobj.count(x) << endl;
  }
}