#include <bits/stdc++.h>
using namespace std;

void heap_sort(vector<int> &heap,priority_queue<int, vector<int>, greater<int>> minheap)   // nlogn time
{
  for (int i = 0; i < heap.size(); i++)            // loops 'n' times
   {
        heap.at(i) = minheap.top();
        minheap.pop();                            // 'logn' time to heapify
   }
}

int main()
{
    priority_queue<int, vector<int>, greater<int>> minheap;
    vector<int> heap;

    int n, ele;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the array to sort: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> ele;
        minheap.push(ele);
        heap.push_back(ele);
    }

    heap_sort(heap, minheap);

    cout << "printing array after heap sort: ";
    for (int i = 0; i < heap.size(); i++)
    {
        cout << heap.at(i) << " ";
    }

    cout << endl;

    return 0;
}



// OUTPUT: 

// Enter the size of array: 5
// Enter the array to sort: 5 4 3 2 1
// printing array after heap sort: 1 2 3 4 5 