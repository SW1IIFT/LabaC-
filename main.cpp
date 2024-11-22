#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<string> fileRead(){
    string s;
    vector<string> array;
    ifstream file("VanyaLevaSeva.txt");
    if(file.is_open()){
        while(getline(file, s)){
            array.push_back(s) ;
        }
    }
    file.close();
    cout << array.size();
    return array;
}
void fileOutput(){

}

void print(){

}

int main()
{

    vector<string> kofe = fileRead();
    cout << kofe.size();

    return 0;
}
