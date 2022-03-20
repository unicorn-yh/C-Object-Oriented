//StackTest.cpp
#include "Stack.cpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    Stack stringStack;
    ifstream in; string line; char* s; int k=0;
    char* array[100];
    stringStack.initialize();
    in.open("data.txt");
    while(getline(in,line))
        stringStack.push(line.c_str());
    while((s=(char*)stringStack.pop())!=0){
        array[k]=s;
        cout << array[k++] << endl;
        delete s;
    }
    cout << "---------------- Fetching done -----------------\n" << endl;
    cout << "--------------- Outputting stash ---------------\n" << endl;
    for(int i=k;i>=0;i--) cout << array[i];
    stringStack.cleanup();
}
