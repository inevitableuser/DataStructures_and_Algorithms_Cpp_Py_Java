#include <bits/stdc++.h>
using namespace std;

class maxheap {
public:
  vector<int> vect;

  maxheap() {}

  void heapify(int i) {
    int lc = i * 2 + 1;
    int rc = i * 2 + 2;
    int larg = i;

    if (lc >= vect.size() || rc >= vect.size()) {
      return;
    }

    if (vect.at(lc) > vect.at(i)) {
      larg = lc;
    }
    if (vect.at(rc) > vect.at(larg)) {
      larg = rc;
    }

    if (larg != i) {
      swap(i, larg);
      heapify(larg);
    }
  }

  void swap(int i, int j) {
    int temp = vect.at(i);
    vect.at(i) = vect.at(j);
    vect.at(j) = temp;
  }
  void insert(int i) {
    int child = i;
    int parent = ceil((float)child / 2) - 1;
    while (child > 0 && vect.at(parent) < vect.at(child)) {
      swap(child, parent);
      child = parent;
      parent = ceil((float)parent / 2) - 1;
    }
  }
  void offer(int ele) {
    vect.push_back(ele);
    int i = vect.size() - 1;
    insert(i);
  }
  int poll() {
    if (vect.size() == 0) {
      return -1;
    }
    int ele = vect.at(0);
    swap(0, vect.size() - 1);
    vect.pop_back();
    heapify(0);
    return ele;
  }
  void peek() {
    if (vect.size() == 0) {
      cout << "heap is empty" << endl;
      return;
    }
    cout << "The root of the heap is " << vect.front() << endl;
  }
  void print() {
    if (vect.size() == 0) {
      cout << "heap is empty" << endl;
      return;
    }
    cout << "printing maxheap: ";
    for (int i = 0; i < vect.size(); i++) {
      cout << vect.at(i) << " ";
    }
    cout << endl;
  }
};

int main() {
  int choice, ele;
  maxheap max = maxheap();

  while (true) {

    cout << "1.offer   2.poll   3.peek   4.print" << endl;
    cout << "enter your choice: ";
    cin >> choice;
    if (choice == 1) {
      cout << "enter the ele: ";
      cin >> ele;
      max.offer(ele);
    } else if (choice == 2) {
      int ele = max.poll();
      if (ele == -1) {
        cout << "Underflow heap is empty" << endl;
      } else {
        cout << "The popped element is: " << ele << endl;
      }
    } else if (choice == 3) {
      max.peek();
    } else if (choice == 4) {
      max.print();
    } else {
      break;
    }
  }
  return 0;
}
