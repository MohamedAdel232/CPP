#include <iostream>

using namespace std;

string StringRepeat (string String, int RepeatCount = 2, string Seperator = " " , bool ShowEnd = false)
{
    string TempString;
    for (int iterator = 0; iterator < RepeatCount; iterator++)
    {
        TempString += String;

        if (iterator < RepeatCount - 1)
        {
            TempString += Seperator;
        }
    }

    if (ShowEnd)
    {
        TempString += Seperator;
    }

    return TempString;
}

int main()
{
    cout << StringRepeat ("Muhamed");

    return 0;
}
