#include <iostream>
using namespace std;
class Test{
    public:
        Test();
        int getInt(){return num;}
        float getFLoat(){return f1;}
        ~Test();  //析构函数，摧毁对象时调用
    private:
        int num;
        float f1;
};
Test::Test(){
    cout<<"Initializing default"<<endl;
    num=0;f1=0.0;
}
Test::~Test(){
    cout<<"Destructor is active"<<endl;
}
int main(){
    Test array[2];
    cout<<array[1].getInt()<<" "<<array[1].getFLoat()<<endl;
    return 0;
}