#include <iostream>

using namespace std;

string GetSubString (string st, int StartChar, int EndChar, bool IncludeEnd = false, bool CountSpace = false)
{
    string TempString = "";

    for (int i = StartChar;IncludeEnd == false? i < EndChar : i <= EndChar ; i++)
    {
        if (!CountSpace && st [i] == ' ')
        {
            EndChar++;
        }
        TempString += st [i];
    }

    return TempString;
}

int main ()
{
    cout << GetSubString ("Muhamed Adel" , 0, 8, true, false);

    return 0;
}

