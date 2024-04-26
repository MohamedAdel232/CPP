#include <iostream>

using namespace std;

void GenerateLettersWithAscii (char StartLetter, char EndLetter)
{
    for (int i = StartLetter; i <= EndLetter; i++)
    {
        cout << char (i) << " || " << i << " || " << char (i + 32) << " || " << i + 32 << "\n";
    }
}

int main()
{
    GenerateLettersWithAscii('A' ,'Z');

    return 0;     
}