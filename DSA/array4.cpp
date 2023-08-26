// Insertion
#include <iostream>
using namespace std;

int main()
{
    int a[5], size, num, pos;
    cout << "Enter the size of array:";
    cin >> size;
    if (size > 5)
    {
        cout << "overflow";
    }
    else
    {
        cout << "Enter the elements of array";
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }
        cout << "Enter the number";
        cin >> num;

        cout << "Enter the position";
        cin >> pos;

        if(pos<=0 || pos>size){
            cout << "Enter a valid position";
        }
        else{
            
        for (int i = size; i > pos - 1; i--)
        {
            a[i] = a[i - 1];
        }

        a[pos - 1] = num;
        size++;

        cout << "Elements of array";
        for (int i = 0; i < size; i++)
        {
            cout << a[i]<<" ";
        }

        }

    }

    return 0;
}