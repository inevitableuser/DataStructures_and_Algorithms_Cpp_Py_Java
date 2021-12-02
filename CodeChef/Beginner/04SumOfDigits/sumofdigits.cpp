#include <iostream>
using namespace std;
class sumofdigits {
public:
  int sum(int x) {
    int sum = 0;
    while (x != 0) {
      sum += (x % 10);
      x /= 10;
    }
    return sum;
  }
};
int main() {
  int n, x, sum;
  cin >> n;

  sumofdigits sumobj = sumofdigits();
  for (int i = 0; i < n; i++) {
    cin >> x;
    sum = sumobj.sum(x);
    cout << sum << endl;
  }
}