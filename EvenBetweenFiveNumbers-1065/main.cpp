#include <iostream>

using namespace std;

int main()
{
    int x[5], even = 0;
    for(int i = 0; i < 5; i++){
        cin >> x[i];
        // Verification with the last value in binary version of x[i]
        if((x[i] & 1) == 0) even++;
    }
    cout << even << " valores pares" << endl;
    return 0;
}
