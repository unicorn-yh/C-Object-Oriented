#include <iostream>
using namespace std;
class A{
    public:
        A(int a,int b):x(a),y(b){
            cout<<"Constructing A..."<<endl;
        }
        void add(int a,int b){
            x+=a;
            y+=b;
        }
        void display(){
            cout<<"("<<x<<","<<y<<")";
        }
        ~A(){
            cout<<"Destructing A..."<<endl;
        }
    private:
        int x,y;
};
class B:private A{ //A的对象不能access父类的任何东西
    public:
        B(int a,int b,int c,int d):A(a,b),i(c),j(d),Aobj(1,1){
            cout<<"Constructing B..."<<endl;
        }
        void add(int x1,int y1,int x2,int y2){
            A::add(x1,y1);
            i+=x1;
            j+=y2;
        }
        void display(){
            A::display();
            Aobj.display();
            cout<<"("<<i<<","<<j<<")"<<endl;
        }
        ~B(){
            cout<<"Destructing B..."<<endl;
        }
    private:
        int i,j;
        A Aobj;
};
int main(){
    B b(1,2,3,4);   
    b.display();
    b.add(1,3,5,7);
    b.display();
    return 0;
}

/*output:
Constructing A...
Constructing A...
Constructing B...
(1,2)(1,1)(3,4)
(2,5)(1,1)(4,11)
Destructing B...
Destructing A...
Destructing A...
*/
