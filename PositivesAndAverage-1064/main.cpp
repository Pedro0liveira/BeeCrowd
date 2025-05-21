#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x = 0, total = 0;
    const int nums = 6;
    int positives = 0;
    for(int i = 0; i < nums; i++){
        cin >> x;
        if(x >= 0){
            positives++;
            total += x;
        }
    }

    cout << positives << " valores positivos" << endl;
    cout << fixed << setprecision(1) << total / positives << endl;

    return 0;
}
