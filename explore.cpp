#include <iostream>
#include <list>
#include <cmath>
#include <fstream>
#include <vector>

using namespace std;


int main(){
  int *ourArray = new int(5);
  for(int i = 0; i<5; i++){
    ourArray[i] = i;
  }


  for(int i = 0; i<5; i++){
      cout << ourArray[i];
  }
  printf("\n\n\n\n");
  cout << &ourArray[2];

}
