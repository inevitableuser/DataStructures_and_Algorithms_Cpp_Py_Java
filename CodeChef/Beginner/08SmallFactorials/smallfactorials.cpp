#include <deque>
#include <iostream>
using namespace std;

class smallfactorials {
public:
  deque<int> fact(int x) {
    deque<int> v(1, 1);
    int carry = 0;
    int exist_ele, val, repl_ele;

    for (int curr_num = 2; curr_num <= x; curr_num++) {

      for (int i = v.size() - 1; i >= 0; i--) {

        exist_ele = v.at(i);

        val = exist_ele * curr_num + carry;

        repl_ele = val % 10;

        carry = val / 10;

        v.at(i) = repl_ele;
      }

      while (carry != 0) {
        v.push_front(carry % 10);
        carry /= 10;
      }
    }

    return v;
  }

  void print(deque<int> v) {
    for (int i : v) {
      cout << i;
    }
    cout << endl;
  }
};

int main() {
  int x, n;
  cin >> n;
  smallfactorials sfobj = smallfactorials();
  for (int i = 0; i < n; i++) {
    cin >> x;
    deque<int> v = sfobj.fact(x);
    sfobj.print(v);
  }

  return 0;
}