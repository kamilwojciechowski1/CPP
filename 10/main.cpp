#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Podaj bok a: " << endl;
    cin >> a;
    cout << "Podaj bok b: " << endl;
    cin >> b;
    cout << "podaj bok c: " << endl;
    cin >> c;

    if(a*a+b*b==c*c)
        cout << "Boki " << a << " " << b << " i " << c << " tworza trojkat prostokatny" << endl;
    else
        cout << "Nie da sie utworzyc trojkata prostokatnego z podanych bokow" << endl;
}
