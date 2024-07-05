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
            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void deleteFromHeap() {
        if (size == 0) {
            cout << "Nothing to delete" << endl;
            return;
        }
        // Step:01
        arr[1] = arr[size];
        // Step:02
        size--;
        // Step:03
        int i = 1;
        while (i <= size) {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            int largest = i;

            if (leftIndex <= size && arr[largest] < arr[leftIndex]) {
                largest = leftIndex;
            }
            if (rightIndex <= size && arr[largest] < arr[rightIndex]) {
                largest = rightIndex;
            }
            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
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

// heapify Method 
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right <= n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n) {
    for (int i = n / 2; i > 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n; i > 1; i--) {
        swap(arr[1], arr[i]);
        heapify(arr, i - 1, 1);
    }
}

int main() {
    heap h;
    h.insert(79);
    h.insert(89);
    h.insert(90);
    h.insert(34);
    h.insert(81);
    h.print();
    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 23, 45, 67, 89, 65};
    int n = 5;

    heapsort(arr, n);
    cout << "Printing the sorted array now " << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

