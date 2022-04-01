//ReferenceToPointer.cpp
#include <iostream>
using namespace std;
void increment1(int*& i){
    (*i)++;   //值加
}
void increment2(int*& i){
    i++;      //引用加，换了地址
    (*i)=0;
}
int main(){
    int a=5;
    int* p=&a;
    cout<<"p="<<p<<": "<<*p<<endl;
    
    increment2(p);
    cout<<"p="<<p<<": "<<*p<<endl;
    
    increment1(p);
    cout<<"p="<<p<<": "<<*p<<endl;
    return 0;
}