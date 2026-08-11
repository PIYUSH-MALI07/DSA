#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;    // "&" is also used to print and assign "Address" // 

    int** ptr2 = &ptr;   // Pointer to Pointer to stores pointers address //

    cout<<"Pointer value = "<<ptr<<endl;   // Prints ptr value is called "a" address //

    cout<<"a address = "<<&a<<endl;     // Prints "a" address //

    cout<<"And its Address of pointer  = "<<&ptr<<endl;   // Prints "ptr" address //

    cout<<"And the value of ptr2 that is called ptr address = "<<ptr2;

    return 0;
}
