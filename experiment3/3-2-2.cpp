/*
a=4    b=X::X(int, char, float)    c=32
a=0    b=X::X()    c=10
a=10   b=X::X(...)    c=10
a=0    b=X::X(const X &other)    c=10

*/
#include <iostream>
using namespace std;
#include <string>
class X{
    public:
        X(int x1,string x2,float x3):a(x1),c(x3){
            b=x2;
        }
        X():a(0),b("X::X()"),c(10){}
        X(int x1,string x2="X::X(...)",int x3=10):a(x1),b(x2),c(x3){}
        X(const X& other){
            a=other.a;
            b="X::X(const X &other)";
            c=other.c;
        }
        void print(){
            cout<<"a="<<a<<"\t"<<"b="<<b<<"\t"<<"c="<<c<<endl;
        }
    private:
        int a;
        string b;
        float c;
};
int main(){
    X *p=new X(4,"X::X(int, char, float)",32);
    X x1,x2(10),x3(x1);
    p->print();
    x1.print();
    x2.print();
    x3.print();
    delete p;
    return 0;
}