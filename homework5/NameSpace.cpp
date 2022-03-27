/*3. Create a header file containing a namespace. Inside the namespace create several function 
declarations. Now create a second header file that includes the first one and continues the 
namespace, adding several more function declarations. Now create a cpp file that includes the 
second header file. Alias your namespace to another (shorter) name. Inside a function definition, 
call one of your functions using scope resolution. Inside a separate function definition, write a 
using directive to introduce your namespace into that function scope, and show that you don’t need 
scope resolution to call the functions from your namespace.*/

//NameSpace.cpp
#include "NameSpace2.h"
using namespace ns2;
void ns2::callAll(){
    cout<<"Calling all functions in NameSpace1 and NameSpace2."<<endl;
    ns1::func1(); ns1::func2(); ns1::func3(); func4(); func5();
}
int main(){
    callAll();
    return 0;
}