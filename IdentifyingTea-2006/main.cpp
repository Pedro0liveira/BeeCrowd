#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int cha_correto = 0, corretos = 0;
    vector<int> palpites(5);
    cin >> cha_correto;
    for(int i = 0; i < 5; i++){
        cin >> palpites[i];
        if (palpites[i] == cha_correto) {
            corretos++;
        }
    }
    cout << corretos << endl;
    return 0;
}
