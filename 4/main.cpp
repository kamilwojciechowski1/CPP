#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=0;
    int c;
    int n;
    cout << "Podaj wynik: ";
    cin >> n;
    c=n/2;
    for(int i=1; i<=c; i++)
    {
        a=n-1;
        b++;
        cout << a << " + " << b << " = " << a+b << endl;
        n--;

    }
    return 0;
}
