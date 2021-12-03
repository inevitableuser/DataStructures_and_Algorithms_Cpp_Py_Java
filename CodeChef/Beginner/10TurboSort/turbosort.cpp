#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class turbosort {
public:
  vector<int> sort_vector(vector<int> v) {
    sort(v.begin(), v.end());
    return v;
  }
  void print_vector(vector<int> v) {
    for (int j = 0; j < v.size(); j++) {
      cout << v.at(j) << endl;
    }
  }
};
int main() {
  int n, x;
  cin >> n;
  vector<int> v;
  turbosort tsort = turbosort();
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  v = tsort.sort_vector(v);
  tsort.print_vector(v);
}