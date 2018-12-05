#include <iostream>

using namespace std;


int main()
{
    char wynik;
    int n;
    int y;
    cout << "Piramida: ";
    cin >> n;
        for(int i=1; i<=n; i++)
        {
            y=65-(n-1);
            for(int j=0; j<n*2-1; j++)
            {
                wynik=(char)y;
               if(j<n-i || j>n+i-2)
               {
                    cout << " ";
               }
                else
                {
                    cout << wynik;

                }
            y++;
            }
            cout << endl;
    }
}
