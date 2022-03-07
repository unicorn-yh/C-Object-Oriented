//Define a function that takes a double argument and returns an int. 
//Create and initialize a pointer to this function, and call the function through your pointer.

//PointerFunction.cpp
#include <iostream>
using namespace std;
int addition(int a,int b){
    return a+b;
}
void fun(){}
int main(){
    int (*pointer)(int s,int t);  //declare pointer
    pointer=addition;             //initialize pointer to the function
    int sum=(*pointer)(4,5);      //call the function through pointer
    cout << "Call functon int addition(int a,int b) through pointer." << endl;
    cout << "Value of addition: " << sum << endl;
    cout << "Address of pointer: " << &pointer << endl;
}



