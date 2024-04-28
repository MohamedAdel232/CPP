#include <iostream>
#include <string>

using namespace std;

string ToUpperCase (string String)
{
    string TempString;

    for (char c : String)
    {
        if (c >= 'a' && c <= 'z')
        {
            c-= 32;
        }
        TempString += c;
    }
    return TempString;
}

string SwapCase (string String)
{
    string TempString;

    for (char c : String)
    {
        if (c >= 'a' && c <= 'z')
        {
            c-= 32;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c+= 32;
        }
        TempString += c;
    }
    return TempString;
}

string ToLowerCase (string String)
{
    string TempString;

    for (char c : String)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c+= 32;
        }
        TempString += c;
    }
    return TempString;
}

int main()
{
    cout << ToUpperCase ("Omg") << "\n";
    cout << ToLowerCase ("Omg") << "\n";
    cout << SwapCase ("Omg") << "\n";

    return 0;
}