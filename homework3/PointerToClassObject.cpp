/*Write two classes, each of which has a member function that takes a pointer to an object of the 
other class. Create instances of both objects in main( )and call the aforementioned member function 
in each class.*/
//PointerToClassObject.cpp
#include <iostream>
#include <memory>
using namespace std;
class Girl;
class Boy{
    public:
        void function(Girl* g){
            cout << "Pointer to the object of class Girl. ";
            cout << "Proccessing function at " << g << endl;
        }
};
class Girl{
    public:
        void function(Boy* b){
            cout << "Pointer to the object of class Boy. ";
            cout << "Proccessing function at " << b << endl;
        }
};
int main(){
    Boy b; Girl g;
    shared_ptr<Boy>b1(new Boy());
    shared_ptr<Girl>g1(new Girl());
    b.function(&g); g.function(&b);
    b1->function(&g); g1->function(&b);
    return 0;
}


