#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    
    float f = (a*b)/12.0;
    
    cout <<fixed << setprecision(3) << f << endl;
    
    return 0;
    
}
