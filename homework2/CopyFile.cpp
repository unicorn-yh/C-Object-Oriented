//编写一个程序，实现一个文本文件到另一个文本文件的拷贝。
#include <fstream>
#include <iostream>
using namespace std;
int main(){
    string s;
    ifstream file1("D:/YH2022/ProjectDocument/data.txt");
    ofstream file2("D:/YH2022/ProjectDocument/dataCopy.txt");
    if(file1.is_open()==false){
        cout << "Error opening file!" << endl;
        return EXIT_FAILURE;
    }
    while(getline(file1,s)){
        file2 << s << endl;
    }
    cout << "File copy process completed." << endl;
    file1.close();
    file2.close();
    return EXIT_SUCCESS;
}




