// scan and print
#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "Enter elements of array";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    
}