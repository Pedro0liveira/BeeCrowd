#include <iostream>
#include <string>

using namespace std;

int main()
{
    string q1 = "", q2 = "", q3 = "";
    cin >> q1 >> q2 >> q3;
    if(q1 == "vertebrado"){
        if(q2 == "ave"){
            if(q3 == "carnivoro"){
                cout << "aguia" << endl;
            }else{
                cout << "pomba" << endl;
            }
        }else{
            if(q3 == "onivoro"){
                cout << "homem" << endl;
            }else{
                cout << "vaca" << endl;
            }
        }
    }else{
        if(q2 == "inseto"){
            if(q3 == "hematofago"){
                cout << "pulga" << endl;
            }else{
                cout << "lagarta" << endl;
            }
        }else{
            if(q3 == "hematofago"){
                cout << "sanguessuga" << endl;
            }else{
                cout << "minhoca" << endl;
            }
        }
    }
    return 0;
}
