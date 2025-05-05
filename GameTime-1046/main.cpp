#include <iostream>

using namespace std;

int main()
{
    int inicio = 0, fim = 0, tempo = 0;
    cin >> inicio >> fim;
    if(fim <= inicio)
        fim += 24;
    tempo = fim - inicio;
    cout << "O JOGO DUROU " << tempo << " HORA(S)" << endl;
    return 0;
}
