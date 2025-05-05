#include <iostream>
#include <iomanip>

using namespace std;

bool PossibleTriangle(double a, double b, double c)
{
    if(a + b > c && a + c > b && b + c > a)
        return true;
    else
        return false;
}

int main()
{
    double a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1);
    if(PossibleTriangle(a, b, c))
        cout << "Perimetro = " << a + b + c << endl;
    else{
        cout << "Area = " << (a * c + b * c) / 2 << endl;
    }
    return 0;
}
