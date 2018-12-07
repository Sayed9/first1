#include <iostream>

using namespace std;

int main(){
    int a, b, c, max;
    
    max = 0;
    
    cin >> a >> b >> c;
    
    if(a > b)
         max = a;
    else
        max = b;
    if(max > c)
         max = max;
    else
        max = c;
    cout << max << " eh o maior\n";
    return 0;
}
