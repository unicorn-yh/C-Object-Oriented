'''
The outputs:
Constructor value = 5 
Constructor value = 3 
Constructor value = 8 
Assignment value = 8 
Destructor value = 8	
Destructor value = 3
Destructor value = 8
'''
#include <iostream>
using namespace std;
class Calculator{
    private: 
        int value;
    public: // your functions:
        Calculator(int v):value(v){  //Constructor
            cout<<"Constructor value = "<<value<<endl;
        }
        Calculator operator+(const Calculator &c1){
            // + Assignment function
            int v=value+c1.value;
            Calculator c = Calculator(v);
            cout<<"Assignment value = "<<v<<endl;
            return c;
        }
        ~Calculator(){   //Destructor
            cout<<"Destructor value = "<<value<<endl;
        }
};
int main(){
    Calculator m(5),n(3);  //Declaration of object
    m = m + n;
    return 0;
}