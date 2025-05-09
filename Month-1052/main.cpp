#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string months[12] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
      };
    int month = 0;
    cin >> month;
    cout << months[month - 1] << endl;
    return 0;
}
