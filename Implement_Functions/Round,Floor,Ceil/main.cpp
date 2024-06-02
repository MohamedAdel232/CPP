#include <iostream>

using namespace std;

int impRound(double num)
{
    return num + 0.5;
}

int impFloor(double num)
{
    return num;
}

int impCeil(double num)
{
    int temp = num;
    if (temp == num){return temp;}

    return num + 1;
}

int main()
{
    cout << impRound (7) << "\n";
    cout << impRound (7.2) << "\n";
    cout << impRound (7.9) << "\n";

    cout << impFloor (7) << "\n";
    cout << impFloor (7.2) << "\n";
    cout << impFloor (7.9) << "\n";

    cout << impCeil (7) << "\n";
    cout << impCeil (7.2) << "\n";
    cout << impCeil (7.9) << "\n";

    return 0;
}