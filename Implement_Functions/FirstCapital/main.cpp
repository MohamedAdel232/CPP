#include <iostream>

using namespace std;

bool FirstCap (string Str)
{
    bool AllCaps = true;

    for (int i = 0; i < Str.length(); i++)
    {
        if ((i == 0) && !((Str[i] >= 'A') && (Str[i] <= 'Z')))
        {
            AllCaps = false;
        }
        else if ((Str [i] == ' ') && !((Str[i + 1] >= 'A') && (Str[i + 1] <= 'Z')))
        {
            AllCaps = false;
        }

        if (!AllCaps)
        {
            break;
        }
    }

    return AllCaps;
}

int main()
{
    cout << FirstCap ("Hello World!") << "\n";
    cout << FirstCap ("Hello world!") << "\n";
    cout << FirstCap ("hello World!") << "\n";
    
    return 0;
}