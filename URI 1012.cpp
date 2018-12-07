#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 float a, b, c, d, e, f, g, h;

cin >> a >> b >> c;

 d= .5*(a*c);
 e= 3.14159*(c*c);
 f= ((a+b)/2)*c;
 g= b*b;
 h= a*b;

cout << "TRIANGULO: "<< fixed << setprecision(3) << d << endl;
 cout << "CIRCULO: "<< fixed << setprecision(3) << e << endl;
 cout << "TRAPEZIO: "<< fixed << setprecision(3) << f << endl;
 cout << "QUADRADO: "<< fixed << setprecision(3) << g << endl;
 cout << "RETANGULO: "<< fixed << setprecision(3) << h << endl;
}
