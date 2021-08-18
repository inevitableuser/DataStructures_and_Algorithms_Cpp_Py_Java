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

    cout << "Enter the min_heap to sort: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> ele;
        minheap.push(ele);
        heap.push_back(ele);
    }

    heap_sort(heap, minheap);

    cout << "printing sorted heap: ";
    for (int i = 0; i < heap.size(); i++)
    {
        cout << heap.at(i) << " ";
    }

    cout << endl;

    return 0;
}
