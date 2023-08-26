#include <iostream>
using namespace std;

int main()
{
int *ptr = nullptr;  // Initializing with null

int num = 10;        
int *numPtr = &num;  // Initializing with address of 'num'

cout<<numPtr<<endl<<*numPtr<<endl<<&num;

}