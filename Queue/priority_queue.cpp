#include <iostream>
#include <queue> 
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq; // min-heap
    pq.push(1); // 1
    pq.push(2); // 1 2
    pq.push(3); // 1 2 3
    pq.push(4); // 1 2 3 4
    pq.push(5); // 1 2 3 4 5

    cout << pq.size() << endl;

    while (!pq.empty()) {
        int val = pq.top();
        cout << val << " ";
        pq.pop();
    }

    return 0;
}
