// Main.cpp
// For the Digital Sledgehammer project
// (c) LukeChemeriov, 2022

// Preprocessor statements
#include "ds.h"

// The good old-fashioned main
int main()
{
    // Register all of the functions
    RegisterFunctions();

    // Let's pretend we got this input from the user:
    //      "echo echothistextplease"
    std::string completecommandline = "echo echothistextplease";
    // Now let's pretend we have isolated the first word from it
    //      "echo"
    std::string completecommandname = "echo";
    // Finally, let's pretend that we remove what we found (and the following space)
    // from the completecommandline variable and put it in another variable called
    // commanddata
    //      "echothistextplease"
    std::string commanddata = "echothistextplease";
    // Now look up the function we found, and run it, along with the input
    // the user specified
    functions[completecommandname](commanddata);
}