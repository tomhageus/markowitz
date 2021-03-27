#include <iostream>
#include <list>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// double[][] coVar(double[],double[]){
//
// }




string getAndSortData(string filename){
  fstream fs{"Data-Markowitz.csv"};
  string s;
  string out;
  // string test;
  while(fs){
    // test+= "test";
    getline(fs,s);
    out+=(s + "\n\n\n\n");
    // cout << s<< '\n';
    // printf("\n\n\n\n");
    // cout << typeid(s).name() << '\n';
    // printf("\n\n\n\n");

  }
  // l = length(s)
  cout << out ;

  return out;
}

int main(){
  string file;
  cout << "Enter the file containing the stock prices ";
  cin >> file;
  string data = getAndSortData(file);
  cout << data;
}
