#include <cmath>
#include <iostream>
using namespace std;
class sqroot {
public:
};

int main() {
  int n, x;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;

    cout << floor(sqrt(x)) << endl;
  }
}
