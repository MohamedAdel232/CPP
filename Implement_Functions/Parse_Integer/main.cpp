#include <iostream>

using namespace std;

int Parse_Integer (string String)
{
    int TempInteger = 0;
    for (char c : String)
    {
        if (c >= '0' && c <= '9')
        {
            TempInteger = TempInteger * 10 + (c - '0');
        }
        else
        {
            break;
        }
    }

    return TempInteger;
}

int main()
{
    cout << Parse_Integer("123Hello");
    return 0;
}