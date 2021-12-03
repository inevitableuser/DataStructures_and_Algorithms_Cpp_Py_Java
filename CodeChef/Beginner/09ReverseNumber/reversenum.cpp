#include <iostream>
using namespace std;

class reversenum {
public:
  int reverse(int x) {
    string st = to_string(x);
    string ans = "";

    for (int i = st.size() - 1; i >= 0; i--) {
      ans += st[i];
    }
    return stoi(ans);
  }
};
int main() {
  int n, x;
  cin >> n;
  reversenum rnobj = reversenum();
  for (int i = 0; i < n; i++) {
    cin >> x;
    cout << rnobj.reverse(x) << endl;
  }

  return 0;
}