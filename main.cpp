#include <iostream>

using namespace std;

int main()
{
    int n, i;
    bool isPRIME = true;

    cout << " Enter a positive number: ";
    cin >> n;

    for (i=2; i<=n/2; ++i)
    {
        if ( n%i==0 )
        {
            isPRIME =false;
            break;
        }
    }
    if ( isPRIME )
        cout << " THIS IS A PRIME NUMBER ";
    else
        cout << "THIS IS NOT A PRIME NUMBER";
    return 0;
}
