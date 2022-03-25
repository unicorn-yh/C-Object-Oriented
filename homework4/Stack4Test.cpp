/*2. Use aggregate initialization to create an array of string objects. 
Create a Stack to hold these strings and step through your array, 
pushing each string on your Stack. Finally, pop the strings off your 
Stack and print each one.*/
//Stack4Test.cpp
#include <iostream>
#include <string.h>
#include "Stack4.cpp"
using namespace std;
int main(){
    Stack4 stringStack;
    string a[6]={"I","am","a","clumsy","clown","Bill"};
    int sizeOfArray=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<sizeOfArray;i++){
        stringStack.push(new string(a[i]));
    }
    string *s;
    while((s=(string*)stringStack.pop())!=0){
        cout<<"String Stack "<<--sizeOfArray<<": "<<*s<<endl;
    }
    return 0;
}
