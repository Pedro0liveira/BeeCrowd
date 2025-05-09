#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salary = 0, tax = 0;
    cin >> salary;
    if(salary <= 2000){
        cout << "Isento" << endl;
        return 0;
    }else{
        if(salary > 4500){
            tax += (salary - 4500) * 0.28 + 350;
        }else{
            if(salary > 3000){
                tax += (salary - 3000) * 0.18 + 80;
            }else{
                tax += (salary - 2000) * 0.08;
            }
        }
    }

    cout << fixed << setprecision(2) << "R$ " << tax << endl;
    return 0;
}
