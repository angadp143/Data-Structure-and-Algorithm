#include <iostream>
using namespace std;

int main()
{
    int nums[] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    int size = 10;

    int greater = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] > greater)
        {
            greater = nums[i];
        }
    }
    cout << "greater = " << greater << endl;
    return 0;
}
