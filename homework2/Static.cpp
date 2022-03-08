//Compile and run Static.cpp. Remove the static keyword from the code, compile and run it again, and explain what happens.
//Using a static variable in a function

//Static.cpp
#include <iostream>
using namespace std;
void func(){
    static int i=0;
    int j=0;
    cout << "i = " << ++i << "                   ";
    cout << "j = " << ++j << endl;
}
int main(){
    cout << "With static keyword:\tWithout static keyword:" << endl;
    for(int x=0;x<9;x++) func();
    return 0;
}
/* Explanation:
The initialization of static variable is performed only the first time the 
function is called, and the data retains its value between function calls.*/


