#include <iostream>

using namespace std;

int WordsCount (string st, char seperator = ' ')
{
    int Count = 0;
    bool Isword = false; 

    for (int i = 0; i <= st.length(); i++)
    {
        if (st [i] == seperator)
        {
            if (Isword)
            {
                Count ++;
                Isword = false;
            }
        }
        else 
        {
            Isword = true;
        }
    }

    if (Isword)
    {
        Count ++;
    }

    return Count;
}

int main()
{
    cout << WordsCount("Hello World my name is");
    return 0;
}