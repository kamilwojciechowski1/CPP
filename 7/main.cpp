#include <iostream>

using namespace std;

int main()
{
    int i=1;
    int n=0;
while(i<=100)
{
    if (i%2==0)
    {
        n=n+i;
    }
i++;
}
cout << n;
}
