#include <iostream>

using namespace std;

string TrimString (string st, string option = "All", char ch = ' ')
{
    string tempString = "";
    int FirstCharPosition = 0;
    int LastStringPosition = 0;

    for (int i = 0; i < st.length(); i++)
    {
        if (ch == st[i])
        {
            FirstCharPosition++;
        }
        else
        {
            break;
        }
    }

    for (int i = st.length() - 1; i >= 0; i--)
    {
        if (ch == st[i])
        {
            LastStringPosition++;
        }
        else
        {
            break;
        }
    }

    if (option == "Left")
    {
        for (int i = FirstCharPosition; i < st.length(); i++)
        {
            tempString += st[i]; 
        }
    }

    else if (option == "Right")
    {
        for (int i = 0; i < st.length() - LastStringPosition; i++)
        {
            tempString += st[i]; 
        }
    }

    else if (option == "All")
    {
        for (int i = FirstCharPosition; i < st.length() - LastStringPosition; i++)
        {
            tempString += st[i]; 
        }
    }

    else
    {
        cout << "Invalid Option!\n";
    }


    // cout << FirstCharPosition << "\n" ;
    // cout << LastStringPosition << "\n" ;

    return tempString;
}

int main()
{
    cout << TrimString ("###Mohamed##" , "Left" , '#') << "\n";
    cout << TrimString ("###Mohamed##" , "Right" , '#') << "\n";
    cout << TrimString ("###Mohamed##" , "All" , '#') << "\n";
    return 0;
}