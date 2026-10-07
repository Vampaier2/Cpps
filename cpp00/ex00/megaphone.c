#include <unistd.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int main(int argc, char **argv)
{
    if(argc < 1)
        return (1);
    int i = 1;

    while (argv[i])
    {
        int j = 0;
        while (argv[i][j])
        {
            char c = ft_toupper(argv[i][j]);
            write(1, &c, 1);
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}