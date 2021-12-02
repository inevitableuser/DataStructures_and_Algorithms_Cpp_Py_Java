#include <iostream>
using namespace std;
class firstandlast {
public:
  int indexsum(int x) {
    int sum;
    int a;
    sum = (x % 10);
    while (x != 0) {
      a = x % 10;
      x /= 10;
    }
    sum += a;
    return sum;
  }
};

int main() {
  int n, x;
  cin >> n;

  firstandlast flobj = firstandlast();
  for (int i = 0; i < n; i++) {
    cin >> x;
    cout << flobj.indexsum(x) << endl;
  }
  return 0;
}