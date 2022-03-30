//Basic pointer
#include <bits/stdc++.h>
using namespace std;
void func(int id){
    cout << "std id: " << id << endl;
}
int f1,f2,f3;
int main() {
    int a=3,b=5;
    int& m=a;
    int& k=m;    //取m地址
    int n=m;     //取m值 不同地址
    int* p=&m;   //取m地址
    int*& ref=p; //
    int i=0;
    cout << ++i << " " << m << endl;  //1 3
    cout << ++i << " "  << &m << endl; //2 0x61ff00
    cout << ++i << " "  << k << endl;  //3 3
    cout << ++i << " "  << &k << endl; //4 0x61ff00
    cout << ++i << " "  << n << endl;  //5 3
    cout << ++i << " "  << &n << endl; //6 0x61fefc
    cout << ++i << " "  << &a << endl; //7 0x61ff00
    cout << ++i << " "  << p << endl;  //8 0x61ff00
    cout << ++i << " "  << *p << endl; //9 3
    cout << ++i << " "  << ref << endl; //10 0x61ff00
    cout << ++i << " "  << &ref << endl; //11 0x61fef4
    cout << ++i << " "  << *ref << endl; //12 3
    cout << ++i << " "  << *&ref << endl; //13 0x61ff00
    m=m+5;
    cout << ++i << " "  << m << endl;  //14 8
    cout << ++i << " "  << &m << endl; //15 0x61ff00
    cout << ++i << " "  << &func << endl;   //16 address 1
    int* c=new int;
    *c=5;
    cout << ++i << " "  << &c << endl;   //17 0x61feec
    cout << ++i << " "  << &(*c) << endl;   // 18 0x7719e8  //放了new 所以地址不一样
    cout << ++i << " "  << *c << endl;   // 19 5
    delete c;

    //函数外定义的变量 地址也不一样
    cout << ++i << " "  << &f1 << endl;   //20 0x408020
    cout << ++i << " "  << &f2 << endl;   //21 0x408024
    cout << ++i << " "  << &f3 << endl;   //22 0x408028

    


}