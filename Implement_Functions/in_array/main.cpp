#include <iostream>
#include <vector>

using namespace std;

bool in_array(vector <int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
        return false;
}

int main()
{
    cout << boolalpha;
    cout << in_array({0,1,2,3,4,5}, 2) << endl;
    cout << in_array({0,1,2,3,4,5}, 6) << endl;;

    return 0;
}