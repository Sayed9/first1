#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double R;
  double n=3.14159;
  double A;
  
  cin >> R;
  A=n*(R*R);
  cout <<fixed <<  setprecision(4)<<"A="<< A <<endl;

   return 0;

}
