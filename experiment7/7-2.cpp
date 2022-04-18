//自定义字符串类的声明，写出该类所有成员函数的类外定义代码。
#include <iostream>
using namespace std;
class S{
    public:
        S(string s):st(s){}
        friend const S operator+(const S& s1,const S& s2);
        friend S& operator+=(S& s1,const S& s2);
        void print()const;
    private:
        string st;
};
const S operator+(const S& s1,const S& s2){
    return s1.st+s2.st;
}
S& operator+=(S& s1,const S& s2){
    s1.st+=s2.st;
    return s1;
}
void S::print()const{
    cout<<st<<endl;
}
int main(){
    S a[]={S("Hello"),S(" "),S("Alice"),S("!"),S(".")};
    a[4]=a[0]+a[1]+a[2]+a[4];
    a[0]+=a[1]+=a[2]+=a[3];
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)a[i].print();
}