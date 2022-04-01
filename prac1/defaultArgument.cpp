#include <iostream>
using namespace std;
void fun(int a=1,int b=3,int c=5); // declaration
int main(){
    fun(); // 1, 3, 5
    fun(1);
    fun(1,3);
    fun(1,3,5);
    return 0;
}
void fun( int a, int b, int c ){ 
    cout << a << ", " << b << ", " << c << endl; 
}