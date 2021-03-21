#include <iostream>
#include <fstream>
#include <typeinfo>
using namespace std;



int readline(){
  fstream fin;
  ifstream istream ("Data-Markowitz.csv", ifstream::binary);
  if(istream){
    //get length of file
    istream.seekg(0, istream.end);
    int length = istream.tellg();
    istream.seekg (0, istream.beg);

    char * buffer = new char [length];

    cout << "Reading" << length << "characters... ";

    istream.read (buffer, length);

    if(istream)
      cout << "all characters read successfully.";
    else
      cout << "error: only " << istream.gcount() << " could be read";
    for(int k=0; k<100; k++){
      cout << buffer[k] << endl;
    }
    cout << buffer[10] << endl;
    istream.close();
    delete[] buffer;
  }
  return 0;
  }
  // fin.read("Data-Markowitz.csv");
  // string s = typeid(str).name

  // int rollnum, roll2, count=0;
  // cout << "Enter the roll number"
  //      << "Of the student to distreamplay details: ";
  // cin >> rollnum;
  //
  // vector<string> row;
  // string line, word, temp;
  //
  // while(fin >> temp){
  //   row.clear();
  //
  //   getline(fin, line);
  //
  //   stringstream s(line);
  //
  //   while (getline(, word, ', ')){
  //
  //     row.push_back(word)
  //   }
  // }

int main(){
  readline();


}
