#include <iostream>

using namespace std;

string CleanString (string st, bool ShowNumbers = true)
{
    string TempString = "";

    for (char c : st)
    {
        if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
        {
            TempString += c;
        }

        if (ShowNumbers && ((c >= '0') && (c <= '9')))
        {
            TempString += c;
        }

        if (c == '_')
        {
            TempString += c;
        }
    }

    return TempString;
}

int main ()
{
    cout << CleanString("$@(*&Moh%@amed_123") << "\n";

    return 0;
}