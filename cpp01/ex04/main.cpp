#include <iostream>//std
#include <fstream>
#include <string>


std::string replaceString(std::string content, std::string s1, std::string s2)
{
    std::string result;
    size_t i = 0;

    while (i < content.length())
    {
        if (content.compare(i, s1.length(), s1) == 0)
        {
            result += s2;
            i += s1.length();
        }
        else
        {
            result += content[i];
            i++;
        }
    }
    return (result);
}

int main(int argc, char **argv)
{
	if(argc != 4)
		return (std::cout << "!!!Not enough arguments!!!" << std::endl, 1);

	//----------copy part--------
	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
    	return (std::cout << "!!!Error while opening the file!!!" << std::endl, 1);
	}
	
	std::string s1 = argv[2];
	if (s1.empty())
	{
    	return (std::cout << "!!!Empty s1!!!" << std::endl, 1);
	}
	std::string s2 = argv[3];
	std::string line;


	std::string file_content;

	while (std::getline(file, line))
	{
		file_content += line;

		if (file.peek() != EOF)
		{
			file_content += "\n";
		}
	}
	file.close();
	//----------make copy and replace S1 with S2----------

	std::string result = replaceString(file_content, s1, s2);

	//----------Create the new .replace file------------------
	std::string newfilename = std::string(argv[1]) + ".replace";
	std::ofstream output(newfilename.c_str());

	if (!output.is_open())
	{
    	return (std::cout << "!!!Error creating the file!!!" << std::endl, 1);
	}
	output << result;
	output.close();

	//std::cout << result << std::endl;
	return (0);
}
