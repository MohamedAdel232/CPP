#include <iostream>
#include <vector>

using namespace std;

string JoinElements (vector<string> st, string Seperator = " ")
{
    string temp;
    for (int i = 0; i < st.size(); i++)
    {
        temp += st[i];

        if(i != st.size() - 1)
        {
            temp += Seperator;
        }
    }
    return  temp;
}

int main()
{
    cout << JoinElements({"Mohamed" , "Adel" , "Saadoun"});

    return 0;
}