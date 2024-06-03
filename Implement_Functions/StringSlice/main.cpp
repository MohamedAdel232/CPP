#include <iostream>

using namespace std;

string StringSlice (string st, int StartNum, int EndNum, int Step = 1, bool rev = false)
{
    string TempString = "";
    for (int i = StartNum; i < EndNum; i += Step)
    {
        if (!rev)
        {
            TempString += st [i];
        }
        else 
        {
            TempString = st [i] + TempString;
        }
    }
    return TempString;
}

int main()
{

    cout << StringSlice("Hello World", 0, 5, 1,false) << endl;
    cout << StringSlice("Hello World", 0, 5, 2,false) << endl;
    cout << StringSlice("Hello World", 0, 5, 1,true) << endl;

    return 0;
}