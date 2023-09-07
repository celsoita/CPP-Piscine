#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream InputFile(argv[1]);
		if (!InputFile)
		{
			std::cout << "File does not exist" << std::endl;
			return (1);
		}
		std::string Replace = ".replace";
		std::string Replacefile = argv[1] + Replace;;
		std::string SearchStr = argv[2];
		std::string ReplaceStr = argv[3];
		std::ofstream OutputFile(Replacefile);
		std::string	line;
		while (std::getline(InputFile, line))
		{
			std::string newLine;
            size_t pos = 0;
            size_t foundPos;

            while ((foundPos = line.find(SearchStr, pos)) != std::string::npos)
            {
                newLine += line.substr(pos, foundPos - pos) + ReplaceStr;
                pos = foundPos + SearchStr.length();
            }

            newLine += line.substr(pos);
            OutputFile << newLine << std::endl;		
		}
		InputFile.close();
		OutputFile.close();
	}
	std::cout << "Insert : <filename> <str_search> <str_replace> " << std::endl;
	return(0);
}