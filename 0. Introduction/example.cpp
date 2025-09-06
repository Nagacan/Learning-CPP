#include <iostream>

int main()
{
    std::cout << "Here is some text.";
    return 0;
}

// This is a single-line comment

/*
 This is a multi-line comment.
It can span across several lines
to provide more detailed explanations.
*/

// Best practice: Name the first/primary source code file in each program main.cpp. This makes it easy to determine which source code file is the primary one.

/*
Many simple C++ programs only have one source code file, but complex C++ programs can have hundreds or even thousands of source code files.

Each source code file in your program will need to be saved to disk, which means each source code file needs a filename. C++ does not have any requirements for naming files. However, the de-facto standard is to name the first/primary source file created for a program main.cpp. The filename (main) makes it easy to determine which is the primary source code file, and the .cpp extension indicates that the file is a C++ source code file.

You may occasionally see the first/primary source code file named after the name of the program instead (e.g. calculator.cpp, poker.cpp). You may also occasionally see other extensions used (e.g. .cc or .cxx).
*/
