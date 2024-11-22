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

vector<string> includeLastChar(vector<string> array){
    for(size_t i = 0; i < array.size(); i++){
        array[i] += '!';
    }
    return array;
}

int main()
{
    vector<string> array = includeLastChar(fileRead());

    return 0;
}
