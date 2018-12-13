#include <iostream>

using namespace std;

int main()
{
    int c=0;
    int d=0;
    int macierz[10][10];
    for(int i=0; i<10; i++)
    {

        for(int j=9; j>=0; j--)
        {
            macierz[i][j] = 0;
            macierz[i][i] = c;
            cout << macierz[i][j];
            d += macierz[i][j];
        }
        c++;
        cout << endl;
    }

    cout << "Suma elementow na przekatnej wynosi: " << d << endl;
    return 0;
}
