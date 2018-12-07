#include <iostream>

using namespace std;

int main(){
    int number, note;
    
    cin >> number;
    
    cout << number <<"\n";
    cout << number/100 << " nota(s) de R$ 100,00\n";
    note = (number%100);
    cout << note/50 << " nota(s) de R$ 50,00\n";
    note = (note%50);
    cout << note/20 << " nota(s) de R$ 20,00\n";
    note = (note%20);
    cout << note/10 << " nota(s) de R$ 10,00\n";
    note = (note%10);
    cout << note/5 << " nota(s) de R$ 5,00\n";
    note = (note%5);
    cout << note/2 << " nota(s) de R$ 2,00\n";
    note = (note%2);
    cout << note/1 << " nota(s) de R$ 1,00\n";
    return 0;
}
