#include <iostream>
#include <vector>

using namespace std;

string GetElement (vector <string> Names, string Position)
{
    int VectorSize = 0;
    for (string name : Names)
    {
        VectorSize++;
    }

    int index = 0;
    for (char c : Position)
    {
        index = index * 10 + (c - '0');
    }
    string TempString; 
    for (int i = 0; i < VectorSize; i++)
    {
        if (Position == "Start")
        {
            TempString += Names [i];
        }
        else if (Position == "End")
        {
            TempString += Names [VectorSize - 1];
        }
        else if (Position[0] >= '0' && Position[0] <= '9')
        {
            if (index < VectorSize)
            {
                TempString += Names [index];
            }
            else
            {
                TempString += "Out of range";
            }
            
        }
        else 
        {
            TempString += "Invalid option!";
        }

        break; 

    }
    return TempString;
}

int main()
{
    cout << GetElement ({"Mo" , "ha" , "me" , "d"} , "Start") << "\n";
    return 0;
}