#include <bits/stdc++.h>
using namespace std;
void SwapByAddress(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    cout <<"a="<<*x<<", "<<"b="<<*y<<endl;
}
void SwapByReference(int& x,int& y){
    int temp=x;
    x=y;
    y=temp;
    cout <<"a="<<x<<", "<<"b="<<y<<endl;
}
int main(){
    int a(5),b(9);
    cout<<"a="<<a<<", "<<"b="<<b<<endl;
    SwapByAddress(&a,&b);
    SwapByReference(a,b);


}