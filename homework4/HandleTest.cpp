/*1. Modify the Handle.h, Handle.cpp, and UseHandle.cpp files at the end of Chapter 5 (Page 296-298) 
to use constructors and destructors.*/
//HandleTest.cpp
#include "Handle.cpp"
#include <iostream>
using namespace std;
int main(){
    Handle h(5);
    cout<<"smile index = "<<h.read()<<endl;
    h.change(6);
    cout<<"new smile index = "<<h.read()<<endl;
    return 0;
}


