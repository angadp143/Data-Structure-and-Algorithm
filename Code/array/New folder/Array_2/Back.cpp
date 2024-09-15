#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(21);
    vec.push_back(51);
    vec.push_back(101);

    cout << "after puch back size=" << vec.size() << endl;

    vec.pop_back();

    cout << vec.back() << endl;

    return 0;
}