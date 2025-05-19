#include <iostream>
#include <string>

using namespace std;

int main()
{
    string _ = "";
    int bd = 0, ed = 0, bh = 0, eh = 0, bm = 0, em = 0, bs = 0, es = 0;
    int w = 0, x = 0, y = 0, z = 0, i = 0;
    cin >> _ >> bd;
    cin >> bh >> _ >> bm >> _ >> bs;
    cin >> _ >> ed;
    cin >> eh >> _ >> em >> _ >> es;

    // Define time in days
    w = ed - bd;

    // Define time in hours
    for(i = bh; i != eh; i++){
        x++;
        if(i >= 24){
            i = 0;
            w--;
        }
    }

    // Define time in minutes
    for(i = bm; i != em; i++){
        y++;
        if(i >= 60){
            i = 0;
            if(x == 0){
                x = 23;
                w--;
            } else{
                x -= 1;
            }
        }
    }

    // Define time in seconds
    for(i = bs; i != es; i++){
        z++;
        if(i >= 60){
            i = 0;
            y--;
        }
    }

    cout << w << " dia(s)" << endl;
    cout << x << " hora(s)" << endl;
    cout << y << " minuto(s)" << endl;
    cout << z << " segundo(s)" << endl;
    return 0;
}
