#include <bits/stdc++.h>

using namespace std;

void swap(vector<int> &vect, int x, int y) {
  int temp = vect.at(x);
  vect.at(x) = vect.at(y);
  vect.at(y) = temp;
}
int partition(vector<int> &vect, int start, int end) {
  int i = start - 1;
  int pivot = vect.at(end);

  for (int j = start; j <= end - 1; j++) {
    if (vect.at(j) <= pivot) {
      i++;
      swap(vect, i, j);
    }
  }
  swap(vect, i + 1, end);

  return i + 1;
}

void quicksort(vector<int> &vect, int start, int end) {
  if (start < end) {
    int q = partition(vect, start, end);
    quicksort(vect, start, q - 1);
    quicksort(vect, q + 1, end);
  }
}

int main() {
  vector<int> vect;
  int ele;
  char ch = 'Y';

  while (ch != 'n' && ch != 'N') {
    cout << "Enter a ele to append: ";
    cin >> ele;
    vect.push_back(ele);
    cout << "continue? y or n: ";
    cin >> ch;
  }

  cout << "vector before sorting: ";
  for (int i : vect)
    cout << i << " ";
  cout << endl;

  quicksort(vect, 0, vect.size() - 1);

  cout << "vector after sorting: ";
  for (int i : vect)
    cout << i << " ";
  cout << endl;

  return 0;
}


/*
OUTPUT:

Enter a ele to append: 5
continue? y or n: y
Enter a ele to append: 67
continue? y or n: y
Enter a ele to append: 23
continue? y or n: y
Enter a ele to append: 1
continue? y or n: y
Enter a ele to append: 45
continue? y or n: y
Enter a ele to append: 89
continue? y or n: y
Enter a ele to append: 4
continue? y or n: y
Enter a ele to append: 77
continue? y or n: n
vector before sorting: 5 67 23 1 45 89 4 77 
vector after sorting: 1 4 5 23 45 67 77 89 

*/
