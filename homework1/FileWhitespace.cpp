//Open a file and counts the whitespace-separated words in the file
//Create a program that counts the whitespace-separated words in the sentence. 
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <string> lines;
    string line;
    int whitespace=0;
    string filename("data.txt");
    ifstream f(filename);
    if(!f.is_open()){
        cerr << "Could not open the file - '" << filename <<"' \n";
        return EXIT_FAILURE;
    }
    while(getline(f,line)){
        lines.push_back(line);
        //for(int i=0;i<line.size();i++) if(line[i]==' ')whitespace+=1;    
    }
    for(const auto &line :lines){
        for(int i=0;i<line.size();i++){
            if(line[i]==' ')whitespace+=1;
        }
    }
    f.close();
    cout << endl << "Total whitespace-separated words in the file: " << whitespace << endl;
    return EXIT_SUCCESS;
}



