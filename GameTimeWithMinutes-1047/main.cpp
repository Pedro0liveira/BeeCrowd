#include <iostream>

using namespace std;

int main()
{
    int hora_inicio = 0, minuto_inicio = 0, hora_fim = 0, minuto_fim = 0, hora_tempo = 0, minuto_tempo;
    cin >> hora_inicio >> minuto_inicio >> hora_fim >> minuto_fim;

    if(minuto_inicio > minuto_fim){
        hora_tempo -= 1;
        minuto_tempo += 60;
        minuto_tempo += minuto_fim - minuto_inicio;
    }else
    minuto_tempo = minuto_fim - minuto_inicio;

    if(hora_fim <= hora_inicio)
        hora_fim += 24;

    hora_tempo += hora_fim - hora_inicio;

    if(hora_tempo >= 24 && minuto_tempo > 0)
        hora_tempo = 0;

    cout << "O JOGO DUROU " << hora_tempo << " HORA(S) E " << minuto_tempo << " MINUTO(S)" << endl;
    return 0;
}
