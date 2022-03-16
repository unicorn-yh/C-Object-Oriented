//完成实验二，画出程序流程图（可只画主函数），并将运行结果截图。
//CStash 定义了一个动态数组，其所需存储资源在运行时刻，根据具体需求动态分配。
//CLibTest.cpp
#include "CLib.cpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    CStash intStash, stringStash;
    char* cp; ifstream in; string line; int k=0; int temp;
    const int stringSize=80;
    initialize(&intStash,sizeof(int));
    for(int i=0;i<10;i++) add(&intStash,&i);
    for(int i=0;i<count(&intStash);i++){
        temp=*(int*)fetch(&intStash,i);
        cout<<"fetch(&intStash," << i << ")= "<<temp<<endl;
    }
    initialize(&stringStash,stringSize*sizeof(char));
    in.open("CLibTest.cpp");
    while(getline(in,line)) add(&stringStash,line.c_str());
    while((cp=(char*)fetch(&stringStash,k++))!=0)
        cout<<"fetch(&stringStash," << k << ")= "<<cp<<endl;
    cleanup(&intStash); cleanup(&stringStash);
}
