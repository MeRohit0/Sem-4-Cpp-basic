// dyanamic memory allocation using pointers
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Tell me your load " << endl;
    cin >> n;
    int *arr = new int[n]; //   <---  This is the syntax
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}