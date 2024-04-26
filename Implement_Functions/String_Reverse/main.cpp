#include <iostream>

using namespace std;

string StringReverse (string String)
{
    string TempString;
    
    for (int i = String.length() - 1; i >= 0; i--)
    {
        TempString += String[i];
    }

    return TempString;
}

int main()
{   
    cout << StringReverse("Easy");
    return 0;
}