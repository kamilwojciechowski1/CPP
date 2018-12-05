#include <iostream>

using namespace std;

int main()
{
    int c =1;
    int d =2;
    for(int a=1; a<=10; a++)
    {
        cout << c << " ";
        for(int b=2; b<=10; b++)
        {
            d=a*b;
            cout << d << " ";
        }
        c++;
        cout << endl;
    }
}
