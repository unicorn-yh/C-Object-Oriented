//Create 3 vector<float> objects. 
//Write a for loop that adds each corresponding element in the first two vectors 
//and puts the result in the corresponding element of the third vector.
//Display all 3 vectors.
#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<float>v;
    for (float i=1.725;i<3;i++){
        v.push_back(i);
    }
    v.push_back(v[0]+v[1]);
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
}