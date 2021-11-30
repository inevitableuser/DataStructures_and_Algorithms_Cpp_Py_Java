#include <iostream>
using namespace std;

class addtwonum {
public:
  int addtwosum() {
    int n, x, y, z;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> x;

      cin >> y;

      cout << (x + y) << endl;
    }

    return 0;
  }
};

int main() {
  addtwonum atn = addtwonum();
  atn.addtwosum();
}