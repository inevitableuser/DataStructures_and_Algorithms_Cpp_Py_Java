#include <iostream>
using namespace std;
class findremainder {};

int main() {
  int n, a, b;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    cin >> b;
    cout << a % b << endl;
  }
}