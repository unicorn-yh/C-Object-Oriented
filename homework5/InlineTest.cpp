/*1. Create two identical functions, f1( ) and f2( ). Inline f1( ) and leave f2( ) as an non-inline 
function. Use the Standard C Library function clock( ) that is found in <ctime> to mark the starting 
point and ending points and compare the two functions to see which one is faster. You may need to 
make repeated calls to the functions inside your timing loop in order to get useful numbers.*/
//InlineTest.cpp
//5-1.cpp
#include <iostream>
#include <ctime>
using namespace std;
inline void f1(){
    string s1="hello";
    char* s2;
    s2=const_cast<char*>(s1.c_str());
}
void f2(){
    string s1="hello";
    char* s2;
    s2=const_cast<char*>(s1.c_str());
}
int main(){
    clock_t startTime=clock();
    for(int i=0;i<10000000;i++) f1();
    float diff=clock()-startTime;
    cout<<"Time to run inline f1(): "<<(float)diff/CLOCKS_PER_SEC<<" seconds"<<endl;
    startTime=clock();
    for(int i=0;i<10000000;i++) f2();
    diff=clock()-startTime;
    cout<<"Time to run f2(): "<<(float)diff/CLOCKS_PER_SEC<<" seconds"<<endl;
    return 0;
}