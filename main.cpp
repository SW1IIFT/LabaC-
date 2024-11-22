#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<string> fileRead(){
    string ordinary;
    vector<string> array;
    ifstream file("VanyaLevaSeva.txt");
    if(file.is_open()){
        while(getline(file, ordinary)){
            array.push_back(ordinary);
        }
    }
    file.close();
    return array;
}
void fileOutput(){

}

void print(){

}

int main()
{
    vector<string> array = fileRead();
    return 0;
}
