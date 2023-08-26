// Traversal
#include<iostream>
using namespace std;

int main(){
    int a[50],size;
    cout<<"Enter the size of array:";
    cin>>size;

    cout<<"Enter the elements of array";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Elements of array";
    for(int i=0;i<size;i++){
        cout<<a[i];
    }


    return 0;
      
}