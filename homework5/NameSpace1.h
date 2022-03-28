/*3. Create a header file containing a namespace. Inside the namespace create several function 
declarations. Now create a second header file that includes the first one and continues the 
namespace, adding several more function declarations. Now create a cpp file that includes the 
second header file. Alias your namespace to another (shorter) name. Inside a function definition, 
call one of your functions using scope resolution. Inside a separate function definition, write a 
using directive to introduce your namespace into that function scope, and show that you don’t need 
scope resolution to call the functions from your namespace.*/

//NameSpace1.h
#include <iostream>
using namespace std;
namespace ns1{
    void func1(){
        cout<<"Calling void NameSpace1::func1()."<<endl;
    }
    void func2(){
        cout<<"Calling void NameSpace1::func2()."<<endl;
    }
    void func3(){
        cout<<"Calling void NameSpace1::func3()."<<endl;
    }
}