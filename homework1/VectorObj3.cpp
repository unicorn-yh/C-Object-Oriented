//Create a vector<float> and put 25 floating-point numbers into it using a for loop. Display the vector.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<float>v;
    for (float i=1.725;i<26;i++){
        v.push_back(i);
    }
    cout << "size of vector: " << v.size() << endl;
    for(int i=1;i<v.size()+1;i++){
        cout << v[i-1] << "\t";
        if(i%5==0) cout << endl;
    }
}





