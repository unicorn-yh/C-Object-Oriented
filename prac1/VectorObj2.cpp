//Create a vector<float> and put 25 numbers into it.
//Square each number and put the result back into the same location in the vector.
//Display the vector before and after the multiplication.

#include <vector>
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    vector<float>v;
    for(float i=1.25;i<=25*0.765+1;i+=0.765) v.push_back(i);
    int length=v.size();
    cout << "size of vector: " << length << endl << endl;
    cout << "vector before multiplication:" << endl;
    for(int i=0;i<length;i++) cout << v[i] << ", ";
    cout << "\n\nvector after multiplication:" << endl;
    for(int i=0;i<length;i++) {
        v[i]=pow(v[i],2);
        cout << v[i] << ", ";
    }
    return 0;

}