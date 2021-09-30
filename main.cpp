#include <iostream>
#include <filesystem>
#include <sstream>
#include <fstream>

//Function to parse text file.
void temp()
{
    std::ifstream input_file;
    std::string input_file_line;
    input_file.open("sample.txt");
    while (std::getline(input_file, input_file_line))
    {
        std::cout << input_file_line << "\n";
        // Loop through text file and determine whether there are any changes between it and existing directory.
    }
}

int main()
{
    std::cout << "=======================================" << "\n";
    std::cout << "- Welcome to the Dir_Tree_Structure_Governance" << "\n";
    std::cout << "- Console Application Version: 1.0" << "\n";
    std::cout << "- Created By: Anthony N." << "\n";
    std::cout << "- Current location of executable: " << std::filesystem::current_path() << "\n";
    std::cout << "=======================================" << "\n\n";

    std::cout << "[>] Select directory to restructure:" << "\n";
    std::string user_input;
    std::getline(std::cin, user_input);
    std::cout << user_input << "\n";
    // Verify whether path exist:
    std::cout << std::filesystem::is_directory(user_input) << "\n";

    if (std::filesystem::is_directory(user_input) == 0)
    {
        std::cout << "[!] Entered user input does not exist." << "\n";
    }
    else
    {
        // List all files within selected directory
        for (const auto& entry : std::filesystem::directory_iterator(user_input))
            std::cout << entry.path() << std::endl;

    }
    // Loop through text file here:
    std::ifstream input_file;
    std::string input_file_line;
    input_file.open("sample.txt");

    std::ofstream output_file;
    output_file.open("./Delta.txt");

    while (std::getline(input_file, input_file_line))
    {
        std::cout << input_file_line << "\n";
        output_file << input_file_line << "\n";
    }
}

/*
Plan & Design
- Console application takes text file describing file/directory structure.
- Parses text file and begins moving/structuring target directory in accordance to text file.
- Takes measures to ensure files listed in text file exist in target directory.
- Potential undo function to undo moved files.

Example:

Existing Directory:
- Folder12
-- File1.txt
-- File45.txt
-- video1.mov
-- pic.png

Transfer to text file and make modifications:
- Folder12
-- File1.txt
-- File999.txt
-- 
-- pic.png

Existing Directory will now be restructured in accordance to text file

*/
