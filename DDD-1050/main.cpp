#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ddd;
    bool valido = false;
    string ddd_destinations[8][2] = {
        {"61", "Brasilia"},
        {"71", "Salvador"},
        {"11", "Sao Paulo"},
        {"21", "Rio de Janeiro"},
        {"32", "Juiz de Fora"},
        {"19", "Campinas"},
        {"27", "Vitoria"},
        {"31", "Belo Horizonte"}
    };

    cin >> ddd;

    for(int i = 0; i < 8; i++){
        if(ddd == ddd_destinations[i][0]){
            valido = true;
            cout << ddd_destinations[i][1] << endl;
        }
    }

    if(!valido)
        cout << "DDD nao cadastrado" << endl;

    return 0;
}
