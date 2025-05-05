#include <iostream>

using namespace std;

int main()
{
    double a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    if(a >= b + c || b >= a + c || c >= a + b)
        cout << "NAO FORMA TRIANGULO" << endl;
    else{
        if(a * a == (b * b) + (c * c) || b * b == (a * a) + (c * c) || c * c == (b * b) + (a * a))
            cout << "TRIANGULO RETANGULO" << endl;
        else if(a * a > (b * b) + (c * c) || b * b > (a * a) + (c * c) || c * c > (b * b) + (a * a))
            cout << "TRIANGULO OBTUSANGULO" << endl;
        else
            cout << "TRIANGULO ACUTANGULO" << endl;
        if(a == b && b == c)
            cout << "TRIANGULO EQUILATERO" << endl;
        if((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}
