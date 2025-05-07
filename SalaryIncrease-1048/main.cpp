#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salary = 0, newSalary = 0;
    int percentage = 0;
    double tableReajustment[4][2] = {
        {400, 0.15},
        {800, 0.12},
        {1200, 0.10},
        {2000, 0.07}
        };

    cin >> salary;

    if(salary > 2000){
        newSalary = salary + salary * 0.04;
        percentage = 4;
    }else{
        for(int i = 4; i >= 0; i--){
            if(salary <= tableReajustment[i][0]){
                newSalary = salary + salary * tableReajustment[i][1];
                percentage = tableReajustment[i][1] * 100;
            }
        }
    }

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << newSalary << endl;
    cout << "Reajuste ganho: " << newSalary - salary << endl;
    cout << "Em percentual: " << percentage << " %" << endl;
    return 0;
}
