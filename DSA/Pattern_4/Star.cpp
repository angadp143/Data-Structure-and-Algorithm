#include <iostream>
using namespace std;
int main()
{
    int p, q, r;
    cout << "Enter the number=";
    cin >> p;
    for (q = 1; q <= p; q++)
    {
        for (r = 1; r <= p; r++)
        {
            cout << "*" <<" ";
        }
        cout << endl;
    }

    return 0;
}