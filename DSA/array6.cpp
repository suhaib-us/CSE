// Arrays and Pointers
#include <iostream>
using namespace std;
int main()
{
    int a[] = {9, 4, 3, 6, 4, 3};

    int *p = a; //here a means address of first element of array a

    // cout << p <<endl<< &p << endl <<p[0]<<endl<< &p[0] << endl << *p << endl;
    // cout << a << endl<< &a << endl <<a[0]<<endl<< &a[0] << endl << *a << endl;
 
 
    // cout<<*p<<p[0];     //values could not be added
    // cout<<*(p+1)<<p[1];
    // cout<<*p+1<<p[0]+1;


    // cout << p+1 << endl ;   //address could be added
    // cout << &p[1] << endl ;
    // cout << &p[0]+1 << endl ;


    // cout << p<< endl ;     //array allocated after the pointer
    // cout << &p<< endl ;    
    // cout << a<< endl ;  
    // cout << &p+1<< endl ;  


    // cout << p+1 <<endl;    
    // cout << a+1<<endl;    
    // cout << &p+1 <<endl;
    // cout << a <<endl;       
    

    // cout << *(a+1)<<endl;    //increments 
    // cout << *(p+1)<<endl;


    // cout << a+1 <<endl;     //a+1 != &a+1
    // cout << &a+1 <<endl;
    

    // int length = sizeof(a) / sizeof(a[0]);
    // cout << "Length of the array: " << length << endl;
}
