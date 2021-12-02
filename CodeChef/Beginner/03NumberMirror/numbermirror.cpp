#include <iostream>
using namespace std;

class numbermirror {
  int n;

public:
  void takeinput() { cin >> n; }
  void printoutput() { cout << n << endl; }
};

int main() {
  numbermirror num = numbermirror();
  num.takeinput();
  num.printoutput();

  return 0;
}