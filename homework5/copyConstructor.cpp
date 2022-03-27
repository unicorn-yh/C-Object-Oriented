/*4. Create a class that contains a double*. The constructor initializes the double* by calling
new double and assigning a value to the resulting storage from the constructor argument. The 
destructor prints the value that’s pointed to, assigns that value to -1, calls delete for the 
storage, and then sets the pointer to zero. Now create a function that takes an object of your 
class by value, and call this function in main( ). What happens? Fix the problem by writing a 
 \copy-constructor.*/

//copyConstructor.cpp
//5-4.cpp
#include <iostream>
using namespace std;
class X{
    public:
        X(double v){
            value=new double(v);
            cout<<"Calling constructor:"<<*value<<endl;
        }
        ~X(){
            cout<<"Calling destructor:"<<*value<<endl;
            cout<<"Address:"<<value<<"\tValue:"<<*value<<endl;
            *value=-1;
            cout<<"Address:"<<value<<"\tValue:"<<*value<<endl;
            cout<<"Deleting storage."<<endl;
            delete value;
            value=0;
            
        }
        double* value;
};
void func(const X& obj){  //copy constructor, to prevent the destructor deletes obj two times
    cout<<"Calling X func(X obj). "<<endl;;
    *(obj.value)+=1.25;
}
int main(){
    X obj(2.31456);
    func(obj);
    return 0;
}