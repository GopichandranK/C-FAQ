#include <fstream>
#include <iostream>
#include <string> // Include the <string> header for getline function

int main()
{
    // Writing to a file
    std::ofstream outfile("example.txt");
    outfile << "Hello, C++ File IO!" << std::endl;
    outfile.close();
    // Reading from a file
    std::ifstream infile("example.txt");
    std::string line;
    while (std::getline(infile, line))
    {
        std::cout << line << std::endl;
    }
    infile.close();
    return 0;
}
