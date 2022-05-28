// Main.cpp
// For the Digital Sledgehammer project
// (c) LukeChemeriov, 2022

// Preprocessor statements
#include "ds.h"
#include "lib/io.h"
#include <bits/stdc++.h>


// Initialization of the IO class
DS_IO DS_IO;

// The good old-fashioned main
int main()
{
    // Register all of the functions
    RegisterFunctions();

    std::string input;
    std::string cmdname;
    // A while loop to continuesly get commands from the user
    while (true)
    {
        // Get the command from the user
        input = DS_IO.kscanf(">>>");
        // Get the first word from it
        std::stringstream sstream(input);
        sstream >> cmdname;
        std::cout << "Command name: " << cmdname << std::endl;
        std::cout << "What you typed (in full):" << input << std::endl;
            // Let's pretend that we remove what we found (and the following space)
            // from the completecommandline variable and put it in another variable called
            // commanddata
            //      "echothistextplease"
            //
            //      std::string commanddata = "echothistextplease";
            // Now look up the function we found, and run it, along with the input
            // the user specified
            //      functions[completecommandname](commanddata);
    }
}