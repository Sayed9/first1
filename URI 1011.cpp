#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    double pi = 3.14159;
    double r;
    while(cin >> r)
    cout << "VOLUME = " << fixed << setprecision(3) << pi*r*r*r*4/3 <<endl;
    return 0;
}
