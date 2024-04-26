#include <iostream>

using namespace std;

string zFill (string String, int Width, string FillValue = " ")
{   
    int Length = String.length();
    if (Width > Length)
    {
        for (int i = 0; i < (Width - Length); i++)
        {
            String = FillValue + String;
        }
    }
    return String;
}

int main()
{
    cout << zFill("Hello" ,10 , "0"); 

    return 0;
}