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
void fileOutput(vector<string> &array){
    ofstream out;
    out.open("hello.txt");
  if (out.is_open())
  {
      for(size_t i = 0; i < array.size(); i++){
                out << array[i] << endl;
      }
  }
  out.close();
}


vector<string> includeLastChar(vector<string> array){
    for(size_t i = 0; i < array.size(); i++){
        array[i] += '!';
    }
    return array;
}
void print(vector<string> array){
    for(size_t i = 0; i < array.size(); i++){
        cout << array[i] << endl;
    }
}
int main()
{

    vector<string> array = includeLastChar(fileRead());
    vector<string> array  = fileRead();
    fileOutput(array);
    print(array);

    return 0;
}
