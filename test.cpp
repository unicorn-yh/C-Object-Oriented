#include "homework2/ShapeLib.cpp"
#include "Eigen/Dense"
using namespace std;
int main(){
    Rectangle r;
    char c='A',ch;
    char *cAddress = &c;
    float area=0.0;
    cout << "Shape task assgined." << endl;
    r.initialize("Rectangle");
    r.setLength(3.5,5.5);
    area=r.calculateArea();
    cout << "Area: " << area << endl;
    ch=r.setId(cAddress);
    cout << "Shape index: " << ch << endl;
    cout << "Task completed." << endl;
    return 0;
}