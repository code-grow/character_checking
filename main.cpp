#include <iostream>
#include <fstream>
#include <string>

int main()
{
    while(true){
    std::string filename = "textfile.txt";
    std::string wordToFind;
    std::cout << "\nEnter the word or characters to find: ";
    std::cin >> wordToFind;
    std::ifstream file(filename);

    if (!file.is_open())
    {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return 1;
    }

    std::string line;
    int lineNumber = 0;

    while (std::getline(file, line))
    {
        lineNumber++;
        if (line.find(wordToFind) != std::string::npos)
        {
            std::cout << "\tFound '" << wordToFind << "' in line " << lineNumber << ":    " << line << std::endl;
        }
    }
file.close();
    }
    //file.close();
    return 0;
}
