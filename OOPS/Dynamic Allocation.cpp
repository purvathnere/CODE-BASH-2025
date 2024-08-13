#include <iostream>
using namespace std;

// Dynamic allocation
int getsum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main() {
    char ch = 'q';
    cout << sizeof(ch) << endl;
    char *c = &ch;
    cout << sizeof(c) << endl;
    
    int n;
    cin >> n;
    
    // Variable size array
    int *arr = new int[n];
    
    // Taking an array input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int ans = getsum(arr, n);
    cout << "Answer is: " << ans << endl;
    //case 01
    while(true)
    {
        int *ptr=new int;
    }
    //case 02
    while(true)
    {
        int i=5;
    }
    
    

    
    return 0;
}
