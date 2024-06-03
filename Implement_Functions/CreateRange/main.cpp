#include <iostream>
#include <vector>

using namespace std;

vector <int> CreateRange (int StartNum, int EndNum)
{
    int Size = EndNum - StartNum + 1;
    vector <int> Temp (Size) ;

    for (int i = 0; i < Size; i++)
    {
        Temp [i] = StartNum + i;
    } 
    
    return Temp;
}

int main()
{
    vector<int> numbers = CreateRange(3, 12);

    for (int i : numbers)
    {
        cout << i << endl;
    }

    return 0;
}