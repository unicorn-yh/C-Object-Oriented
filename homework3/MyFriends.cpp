/*Create three classes. The first class contains private data and grants friendship to the 
entire second class and to a member function of the third class. In main( ), demonstrate 
that all of these work correctly.*/
//MyFriends.cpp
#include <iostream>
using namespace std;
class Weight;
class Car{     //third class
    public:
        float setWeight(Weight);
};
class Weight{     //first class which contains private data
    private:
        float weight;
        friend class Airplane; //grants friendship to the entire second class
        friend float Car::setWeight(Weight); //grants friendship to a member function of the third class
};
float Car::setWeight(Weight w){
    w.weight=100.05; return w.weight;
}
class Airplane{  //second class
    public:
        float setWeight(Weight w){
            w.weight=975.665; return w.weight;
        }
};
int main(){
    Car c; Airplane a; Weight w;
    cout << "Car weight = " << c.setWeight(w) << endl;
    cout << "Airplane weight = " << a.setWeight(w) << endl;
    return 0;
}

