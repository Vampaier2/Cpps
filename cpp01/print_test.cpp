#include <iostream>//std
#include <fstream>
#include <string>

void print(std::string text)
{
    std::cout << text << std::endl;
}

int main()
{
    int bananas = 5;
    print(std::string("Number of bananas is: ") + bananas);
    return (0);
}