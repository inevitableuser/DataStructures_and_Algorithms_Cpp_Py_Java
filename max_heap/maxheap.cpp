#include <bits/stdc++.h>
using namespace std;

class maxheap {
public:
  vector<int> vect;

  maxheap() {}

  void rebuild()
  {
    cout<<"rebuilding maxheap after sort..."<<endl;
    int len=ceil((float) vect.size()/2)-1;
    for(int i=len;i>=0;i--)
    {
        heapify(i, vect.size());
    }
  }
  void sort()
  {
    for(int i=vect.size()-1;i>=0;i--)
    {
      swap(0,i);
      heapify(0,i);
    }
    cout<<"Sorting heap completed..."<<endl;
    print();
    rebuild();
     
  }

  void heapify(int i,int n) {
    int lc = i * 2 + 1;
    int rc = i * 2 + 2;
    int larg = i;


    if (lc<n && vect.at(lc) > vect.at(i)) {
      larg = lc;
    }
    if (rc<n && vect.at(rc) > vect.at(larg)) {
      larg = rc;
    }

    if (larg != i) {
      swap(i, larg);
      heapify(larg,n);
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
    heapify(0,vect.size());
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

    cout << "1.offer   2.poll   3.peek   4.print   5.sort   6.exit" << endl;
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
    } 
    else if(choice==5)
    {
       max.sort();
    }
    else {
      break;
    }
  }
  return 0;
}

/*

OUTPUT:

1.offer   2.poll   3.peek   4.print
enter your choice: 1
enter the ele: 1
1.offer   2.poll   3.peek   4.print
enter your choice: 1
enter the ele: 2
1.offer   2.poll   3.peek   4.print
enter your choice: 1
enter the ele: 3
1.offer   2.poll   3.peek   4.print
enter your choice: 1
enter the ele: 4
1.offer   2.poll   3.peek   4.print
enter your choice: 1
enter the ele: 5
1.offer   2.poll   3.peek   4.print
enter your choice: 3
The root of the heap is 5
1.offer   2.poll   3.peek   4.print
enter your choice: 4
printing maxheap: 5 4 2 1 3
1.offer   2.poll   3.peek   4.print
enter your choice: 1
enter the ele: 6
1.offer   2.poll   3.peek   4.print
enter your choice: 4
printing maxheap: 6 4 5 1 3 2
1.offer   2.poll   3.peek   4.print
enter your choice: 1
enter the ele: 7
1.offer   2.poll   3.peek   4.print
enter your choice: 4
printing maxheap: 7 4 6 1 3 2 5
1.offer   2.poll   3.peek   4.print
enter your choice: 1
enter the ele: 8
1.offer   2.poll   3.peek   4.print
enter your choice: 3
The root of the heap is 8
1.offer   2.poll   3.peek   4.print
enter your choice: 4
printing maxheap: 8 7 6 4 3 2 5 1
1.offer   2.poll   3.peek   4.print
enter your choice: 1
enter the ele: 9
1.offer   2.poll   3.peek   4.print
enter your choice: 4
printing maxheap: 9 8 6 7 3 2 5 1 4
1.offer   2.poll   3.peek   4.print
enter your choice: 1
enter the ele: 10
1.offer   2.poll   3.peek   4.print
enter your choice: 3
The root of the heap is 10
1.offer   2.poll   3.peek   4.print
enter your choice: 4
printing maxheap: 10 9 6 7 8 2 5 1 4 3
1.offer   2.poll   3.peek   4.print
enter your choice: 2
The popped element is: 10
1.offer   2.poll   3.peek   4.print
enter your choice: 2
The popped element is: 9
1.offer   2.poll   3.peek   4.print
enter your choice: 2
The popped element is: 8
1.offer   2.poll   3.peek   4.print
enter your choice: 2
The popped element is: 7
1.offer   2.poll   3.peek   4.print
enter your choice: 2
The popped element is: 6
1.offer   2.poll   3.peek   4.print
enter your choice: 2
The popped element is: 5
1.offer   2.poll   3.peek   4.print
enter your choice: 2
The popped element is: 4
1.offer   2.poll   3.peek   4.print
enter your choice: 2
The popped element is: 3
1.offer   2.poll   3.peek   4.print
enter your choice: 2
The popped element is: 2
1.offer   2.poll   3.peek   4.print
enter your choice: 2
The popped element is: 1
1.offer   2.poll   3.peek   4.print
enter your choice: 2
Underflow heap is empty
1.offer   2.poll   3.peek   4.print
...

*/