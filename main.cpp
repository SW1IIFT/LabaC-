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

void print(vector<string> array){
    for(size_t i = 0; i < array.size(); i++){
        cout << array[i] << endl;
    }
}
void sign (vector<string> array){
}

int main()
{

    vector<string> array  = fileRead();
    //cout << array.size();

    fileOutput(array);

    //vector<string> array1  = bubunt(array);

    print(array);

    //sign(print(array));


    return 0;
}
