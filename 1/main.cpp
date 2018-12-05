#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;

    int i =0;
    switch(i)
    {
    case 2:
        cout << "luty" << endl;
    case 3:
        cout << "marzec" << endl;
        break;
    case 4:
        cout << "kwiecien" << endl;
    default:
        cout << "brak spelnionego warunku" << endl;
    }
}
