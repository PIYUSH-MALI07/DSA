                     // using Derefernce Operator //
#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int* ptr = &a;
    int** parPtr = &ptr;
    
    cout<<*(parPtr)<<endl;  // yaha * dereference use keya ha to yaha parptr par store ha ptr ka
                            // Address to os address pe kya ha vo print kardega.

    cout<<**(parPtr)<<endl;  // yaha mana ** derefernce use keya hai to ab ya parPter par
                              //store ha ptr ka add. ptr par store ha "a" ka address to os address
                              // par jo value hai vo print hogi.

    cout<<ptr<<endl;   // ptr ke value print karega //
    cout<<&a;          // or ya "a" ka address print karega //

}