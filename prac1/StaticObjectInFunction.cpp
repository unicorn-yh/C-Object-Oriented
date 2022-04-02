//StaticObjectInFunction.cpp
#include <iostream>
using namespace std;
class X{
    int i;
    public:
        X(int ii):i(ii){cout<<"X():"<<i<<endl;}
        ~X(){cout<<"~X():"<<i<<endl;}
};
X x0(5);       //X():5
void f(){
    static X x1(47);
    X x2(0);
}
int main(){
    f();       //X():47  X():0  ~X():0
    f();       //X():0  ~X():0
    X x3(10);  //X():10  ~X():10
    return 0;
}              //~X():47  ~X():5