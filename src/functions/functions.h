// Functions.h
// For the Digital Sledgehammer project
// (c) LukeChemeriov, 2022

// Preprocessor statements
#include <string>
#include <iostream> // Don't expect to see using namespace std; here, I think I'd
                    // rather poke my eyes out with sharp sticks...
#include "../lib/io.h"
#include "../lib/header-functions.h"

// Initialisation of IO class
DS_IO io;
// A simple echo function
void echoFunction(const std::string& userinput)
{
    // if there is a valid size of the string...
    if (userinput.length() > 0)
    {
        // Let's print the text the user gave us
        io.kprintf(userinput);
    }
    else
    {
        // Then let's not try and print anything, or we'll crash stuff
        // which is obviously bad
        return;
    }
     
}
// a function to clear the screen
void clearFunction(const std::string& userinput)
{
    // if the user sent us something
    if (userinput.length() >0)
    {
        // tell them not to
        io.kprintf("Could not find definition for argument: " + userinput + ", please try again with no arguments.");     
    }
    // if not, let's continue
    else
    {
        // let's clear the screen
        DS_CLEAR_SCREEN
    }
}

// a function to exit the program (why would you want to exit?? is this program not good enough for you?????)
void exitFunction(const std::string& userinput)
{
    // if the user sent us something
    if (userinput.length() >0)
    {
        // tell them not to
        io.kprintf("Could not find definition for argument: " + userinput + ", please try again with no arguments.");       
        // Debugging tool
        io.kprintf("You entered: " + userinput + " as an argument.");        
    }
    // if not, let's continue
    else
    {
        // exit the program
        io.kprintf("exit"); // a smol UI note
        exit(2); // Exit 2 error code is for a manual shutdown
    }
}

