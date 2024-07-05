#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class heap {
    int arr[100];
    int size;

public:
    heap() {
        arr[0] = -1; // Usually, the first element of the heap is not used
        size = 0;
    }

    void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] < arr[index]) { // Fix the comparison and logic here
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

void deleteFromHeap()
{
    if(size==0)
    {
        cout<<"Nothing to delete"<<endl;
        return;
    }
    //step:01
    arr[1]=arr[size];
    //step:02
    size--;
    //step:03
    int i = 1;
    while(i<size)
    {
        int leftIndex = 2*i;
        int rightIndex = 2*i+1;
        if(leftIndex<size&&arr[i]<arr[leftIndex])
        {
            swap(arr[i],arr[leftIndex]);
            i=leftIndex;
        }
        else if(leftIndex<size&&arr[i]<arr[leftIndex])
        {
            swap(arr[i],arr[leftIndex]);
            i=rightIndex;
        }
        else{
            return;
        }
    }
}
    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
//heapify Method 
void heapify(int arr[],int n ,int i)
{
    int largest = i;
    int left = 2*i;
    int right=2*i+1;
    if(left<n&&arr[largest]<arr[left])
    {
        swap(arr[i],arr[left]);
        largest=left;
    }
    if(right<n&&arr[i]<arr[right])
    {
        swap(arr[i],arr[right]);
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

int main()
{
    heap h;
    h.insert(79);
    h.insert(89);
    h.insert(90);
    h.insert(34);
    h.insert(81);
    h.print();
    h.deleteFromHeap();
    h.print();
    int arr[6]={-1,23,45,67,89,65};
    int n=5;
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }cout<<"Printing the array now "<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }cout<<endl;
    return 0;
    
}
