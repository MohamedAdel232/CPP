#include <iostream>
#include <vector>

using namespace std;

int GetMinimumValue (vector <int> Numbers)
{
    int MinimumNumber = Numbers [0];

    for (int i = 0; i < Numbers.size(); i++)
    {
        if (Numbers [i] < MinimumNumber)
        {
            MinimumNumber = Numbers [i];
        }
    }

    return MinimumNumber;
}

int GetMaximumValue (vector <int> Numbers)
{
    int MaximumNumber = Numbers [0];

    for (int i = 0; i < Numbers.size(); i++)
    {
        if (Numbers [i] > MaximumNumber)
        {
            MaximumNumber = Numbers [i];
        }
    }

    return MaximumNumber;
}

int main()
{
    cout << GetMinimumValue({1,2,6,98,-5}) << "\n";
    cout << GetMaximumValue({1,2,6,98,-5}) << "\n";
    return 0;
}