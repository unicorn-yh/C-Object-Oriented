#include <iostream>
#include <string.h>
using namespace std;
class Food {
    string FoodName;  
    public:
        Food();
        Food(string s):FoodName(s){};
        string GetFoodName(){return FoodName;}
};   
class Animal{  // abstract class
    string AnimalName;  
    Food temp; 
    Food& food=temp;  
    public: // your functions:
        Animal();
        Animal(string n,Food f){
            AnimalName=n;
            food=f;
        };
        string GetAnimalName(){
            return AnimalName;
        }
        string GetFoodName(){
            return food.GetFoodName();
        }
        void Eat(){
            cout<<"Animal::Eat"<<endl;
        }
        ostream& operator<<(Animal& a){
            return cout<<a.GetAnimalName()<<ends<<" likes to eat "<<ends<<a.GetFoodName()<<"."<<endl;
        }
        void Print(){
            cout<<GetAnimalName()<<" likes to eat "<<GetFoodName()<<"."<<endl;
        }
};
class Wolf:public Animal{
    public: // your functions:
        Wolf(string name,Food f){
            Animal(name,f);
        }
        void Eat(){
            cout<<"Wolf::Eat"<<endl;
        }
};
class Tiger:public Animal{
    public: // your functions:
        Tiger(string name,Food &f){
            Animal(name,f);
        }
        void Eat(){
            cout<<"Tiger::Eat"<<endl;
        }
};
int main(){
    Food meat("meat");
    Animal* panimal = new Wolf("wolf", meat);

    panimal->Eat();            // display: Wolf::Eat
    //cout << *panimal << endl;   // display: Wolf likes to eat meat.
    panimal->Print();
    delete panimal;

    panimal = new Tiger("Tiger", meat);
    panimal->Eat();           // display: Tiger::Eat
    //cout << *panimal << endl;  // display: Tiger likes to eat meat.
    panimal->Print();
    delete panimal;
    return 0;
}
