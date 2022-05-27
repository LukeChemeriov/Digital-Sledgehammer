// Functions.h
// For the Digital Sledgehammer project
// (c) LukeChemeriov, 2022

// Preprocessor statements
#include <string>
#include <iostream> // Don't expect to see using namespace std; here, I think I'd
                    // rather poke my eyes out with sharp sticks...
#include "../lib/io.h"

// Initialisation of IO class
DS_IO io;

// A simple echo function
void echoFunction(const std::string & userinput)
{
    // Let's print the text the user gave us
     io.kprintf(userinput);
}