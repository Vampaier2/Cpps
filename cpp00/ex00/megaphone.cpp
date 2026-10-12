#include <iostream>
#include <string>
#include <cctype>

/* int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
} */

int main(int argc, char **argv)
{
	int i = 1;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
		return (0);
	}
	while (i < argc)
    {
        std::string str = argv[i];

        size_t j = 0;
        while (j < str.length())
        {
            std::cout << (char)std::toupper(str[j]);
            j++;
        }
        i++;
    }
	std::cout << std::endl;
	return (0);
}