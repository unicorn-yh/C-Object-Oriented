//Make a Stash that holds doubles. Fill it with 25 double values, then print them out to the console. 
//（using Stash defined in C04:CppLib.h/CppLib.cpp)
//CLibTest3.cpp
#include "CLib3.cpp"
#include <bits/stdc++.h>
using namespace std;
const double PI = 3.14159;
int main(){
    Stash s;
    double temp;
    s.initialize(sizeof(double));
    for(double i=PI;i<25+PI;i++) s.add(&i);
    for(int i=0;i<s.count();i++){
        temp=*(double*)s.fetch(i);
        cout<<"fetch Stash "<<i<<": "<<temp<<endl;
    }
    s.cleanup();
    return 0;   
}





