//完成实验一，运行结果截图提交。
//编写一个程序，实现一个文本文件到另一个文本文件的拷贝。
#include <bits/stdc++.h>
using namespace std;
int main(int argc,char* argv[]){
    if(argc<=2){
        cout << "Bad command parameter!" << endl;
        exit(1);
    }
    string line;
    ifstream file1(argv[1]);
    ofstream file2(argv[2]);
    if(file1.is_open()==false){
        cerr << "Error opening file!" << endl;
        exit(2);
    }
    while(getline(file1,line)){
        file2 << line << endl;
    }
    return 0;
}



