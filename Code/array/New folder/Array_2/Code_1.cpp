#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec={1, 2, 3, 4};
    vector<int> vec(5, 1);

    // vect.push_back(11);

    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;

    return 0;
}
