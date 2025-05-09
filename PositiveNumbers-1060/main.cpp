#include <iostream>

using namespace std;

int main()
{
    const int index = 6;
    int positives = 0;
    double num = 0;
    for(int i = 0; i < index; i++){
        cin >> num;
        if(num >= 0){
            positives++;
        }
    }
    cout << positives << "valores positivos" << endl;
    return 0;
}
