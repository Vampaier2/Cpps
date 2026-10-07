#include <iostream>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;

    if (argc < 2)
	{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
        return (0);
    }
        if(argc < 1)
        return (1);
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            char c = ft_toupper(argv[i][j]);
            std::cout << c;
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}