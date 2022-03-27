/*2. Create a class that holds an array of ints. Set the size of the array using static const int 
inside the class. Add a const int variable, and initialize it in the constructor initializer list; 
make the constructor inline. Add a static int member variable and initialize it to a specific value. 
Add a static member function that prints the static data member. Add an inline member function called 
print( ) to print out all the values in the array and to call the static member function. Exercise 
this class in main( ).*/

//InitializerList.cpp
//5-2.cpp
#include <iostream>
using namespace std;
class IntArray{
    public:
        inline IntArray(int X):x(X){
            for(int i=0;i<array_size;i++) a[i]=i;
        }
        static void printY(){
            cout<<"y value: "<<y<<endl;
        }
        inline void print(){
            for(int i=0;i<array_size;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl<<"Calling static void printY():"<<endl;
            printY();
        }
    private: 
        static const int array_size=10;
        const int x;
        static int y;
        int a[array_size];
};
int IntArray::y=5;
int main(){
    IntArray obj(6);
    obj.print();
    return 0;
}
//int IntArray::x=2;