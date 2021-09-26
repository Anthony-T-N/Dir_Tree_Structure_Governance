#include <iostream>
#include <filesystem>

//Function to parse text file.

int main()
{
    std::cout << "=======================================" << "\n";
    std::cout << "- Welcome to the Dir_Tree_Structure_Governance" << "\n";
    std::cout << "- Console Application Version: 1.0" << "\n";
    std::cout << "- Created By: Anthony N." << "\n";
    std::cout << "- Current location of executable: " << std::filesystem::current_path() << "\n";
    std::cout << "=======================================" << "\n\n";
}

/*
Plan & Design

- Console application takes text file describing file/directory structure.
- Parses text file and begins moving/structuring target directory in accordance to text file.
- Takes measures to ensure files listed in text file exist in target directory.
- Potential undo function to undo moved files.

*/
