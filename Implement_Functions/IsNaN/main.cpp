#include <iostream>

bool IsNan (std:: string String)
{
    for (char c : String)
    {
        if (c < '0' || c > '9')
        {
            return true;
        }
        
    }
    return false;
}

int main()
{
    std:: cout << IsNan("1234") << std::endl;
    std:: cout << IsNan("1234G") << std::endl;

}