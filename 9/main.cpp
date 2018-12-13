#include <iostream>

using namespace std;

int main()
{
    int c=1;
    int d=0;
    int t[10][10];
    for(int i=0; i<10; i++)
    {

        for(int j=0; j<10; j++)
        {
            t[i][j] = 0;
            t[i][i] = 1;
            cout << t[i][j];
        }
        cout << endl;
    }
    for(int k = 0; k<10; k++)
    {
        d += t[k][k];
    }
    cout << "Suma elementow na przekatnej wynosi: " << d << endl;
    return 0;
}
