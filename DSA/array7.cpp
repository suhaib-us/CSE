// Arrays and Pointers
#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int *q;
    q=a;

    for(int i=0;i<5;i++){
        cin>>a[i];   // or q[i]  for q[0]=address of first element
    }
    for(int i=0;i<5;i++){
        cout<<*q;   // or *(q+i) or a[i]=value at first element
        q++;
    }

} 
