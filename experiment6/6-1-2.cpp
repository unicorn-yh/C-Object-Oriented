#include <iostream>
using namespace std;
class A{
    public:
        A(int a):x(a){
            cout<<"Constructing A..."<<x<<endl;
        }
        int fun(){
            return ++x;
        }
        ~A(){
            cout<<"Destructing A..."<<endl;
        }
    private:
        int x;
};
class B:public virtual A{
    public:
        B(int a,int b,int c):A(a),y(c),Aobj(c){
            cout<<"Constructing B..."<<y<<endl;
        }
        int fun(){
            A::fun();
            Aobj.fun();
            return ++y;
        }
        void display(){
            cout<<A::fun()<<"\t"<<Aobj.fun()<<"\t"<<fun()<<endl;
        }
        ~B(){
            cout<<"Destructing B..."<<endl;
        }
    private:
        int y;
        A Aobj;
};
class C:public B{
    public:
        C(int a,int b,int c):B(a,b,c),A(0){
            cout<<"Constructing C..."<<endl;
        }
};
class D:public C,public virtual A{
    public:
        D(int a,int b,int c):C(a,b,c),A(c){
            cout<<"Constructing D..."<<endl;
        }
        ~D(){
            cout<<"Destructing D..."<<endl;
        }
};
int main(){
    D d(7,8,9);
    d.fun();     //B::fun() 
    d.display();
    return 0;
}
/*output:
Constructing A...9   //D
Constructing A...9   //B::Aobj
Constructing B...9
Constructing C...
Constructing D...
12  12  11
Destructing D...
Destructing B...
Destructing A...
Destructing A...




*/