#include <iostream>
#include <vector>

using namespace std;

int GetSumOfNumbers (vector <int> Numbers, char Operation = '+')
{
    int Result = Operation == '*' ? 1 : 0;

    for (int num : Numbers)
    {
        switch (Operation)
        {
            case '+':
             Result += num;
              break;
            case '-':
             Result -= num;
              break;
            case '*':
             Result *= num;
              break;
            default : cout << "Invalid Option!"; break;
        }
    }
    return Result;
}

int main()
{
    cout << GetSumOfNumbers ({1,2,3} , '*');

    return 0;
}