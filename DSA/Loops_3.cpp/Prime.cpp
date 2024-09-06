#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isPrime = true;
    cout << "Enter the number=";
    cin >> n;
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "Prime_number\n";
    }
    else
    {
        cout << "Non_prime Number\n";
    }
    // isPrime->true->prime
    // isPrime->false->non prime
    cout << endl;
    return 0;
}