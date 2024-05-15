#include <iostream>

using namespace std;

string ParseString (string st)
{
    string TempString = "";

    for (int i = 0; i <= st.length(); i++)
    {
        if (st[i] == '=')
        {
            TempString += ": ";
            continue;
        }

        if (st[i] == '&')
        {
            TempString += "\n";
            continue;
        }

        TempString += st[i];
    }

    return TempString;
}

int main()
{
    cout << ParseString ("name=Mohamed&age=22&country=Egypt") << "\n";
    return 0;
}