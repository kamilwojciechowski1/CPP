#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "podaj druga liczbe: "<< endl;
    cin >> b;

    c=a%b;

    cout << "wynik to: " << c <<endl;
    return 0;

}
