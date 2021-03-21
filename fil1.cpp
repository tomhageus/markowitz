<<<<<<< HEAD
#include <cstring>
#include <iostream>
#include <set>
#include "mf.h"

using namespace std;
void get(char s[], int n)

{
int i = 0;
cin >> ws; //Hoppa över vita tecken

while (i < n-1 &&
        cin.peek() != ' ' && cin.peek() != '\t' &&
        cin.peek() != '\n' && !cin.eof())
{
  cin >> s[i]; // Läs icke-vita tecken

}

s[i] = '\0';
}

void put(double x, int fore, int aft)
{
cout << setprecision(aft) << set setiosflags(ios::fixed)
     << setw(fore+aft+1) << x
     << setprecision(6) << resetiosflags(ios:fixed);
}

void put(int i, int width)
{
cout << setw(width) << i;
}

void put(char s[])
{
cout << s;
}

void new_line() //Ger ny utskriftsrad

{
  cout <<endl;
}

int main()

{
char a[30];
double sum = 0;
int n = 0;
get(a,30);




while(strlen(a) > 0)

{
n++ ;
sum += strlen(a);
get(a,30);
}

put("Antal ord:");
put(n,13);
new_line();
put("Genomsnittlig längd:");
put(sum/n, 3, 1); new_line();

=======
#include <iostream>
#include <cstring>

// testar att inkludera en headerfil som vi själv skrivit
#include "mf.h"

using namespace std;
int main(){

  int outint = multiplyBy5(9);
  cout  << outint << endl;
<<<<<<< HEAD
=======
  // void get(char s[], int n){
  //
  // }
  //
  //
  //
  // char a[30];
  // double sum = 0;
  // int n= 0;
  // get(a,30);
  // while( strlen(a) >0){
  //   n++;
  //   sum += strlen(a);
  //   get(a,30);
  // }
  //
  // put("Antal ord: ");
  // put(n, 13);
  // new_line();
  // put("genomsnitlig längd: ");
  // put("sum\n", 2, n); new_line();
>>>>>>> dccf15c3487baec2f71bb6e34f7337cf27981ba1
>>>>>>> 370e5f1ce226f531f79fca110591e4f2d8133bb1

}
