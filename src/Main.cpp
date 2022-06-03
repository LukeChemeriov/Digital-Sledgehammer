// Main.cpp
// For the Digital Sledgehammer project
// (c) LukeChemeriov, 2022

// Preprocessor statements
#include "ds.h"
#include "lib/io.h"
#include <bits/stdc++.h>
#include <climits>

// Initialization of the IO class
DS_IO DS_IO;

// The good old-fashioned main
int main()
{
    // Register all of the functions
    RegisterFunctions();
    std::string commanddata;
    std::string input;
    std::string cmdname;
    int commandlength = 0;
    if (commandlength == 0){}else{} // This is so that G++ doesn't complain that I have got a variable and never used it
    bool DoesInputStringContainSpace = false;
    // A while loop to continuesly get commands from the user
    while (true)
    {        
        // Get the command from the user
        input = DS_IO.kscanf(">>>");
        // Record the command length
        commandlength = input.length();
        // Make sure that the user doesn't just send us nothing
        if (commandlength <= 0)
        {
            continue;
        }
        else
        {
            // Get the first word from it (this is the command name, e.g. "echo")
            std::stringstream sstream(input);
            sstream >> cmdname;

            // We now have the name of the command the user entered (cmdname),
            // and we also have the full command. Now, we can remove the command
            // name and find the data we need to pass to that function
            // (literally input - cmdname)
            // Here's what we're going to do:
            //      1) Loop through the string until we find a space (' ')
            //      2) Erase everything up to and including that space, and store it in another variable
            // I don't know why I made a list, because that's it 
            commanddata = input;
            // Reset the DoesInputStringContainSpace counter
            DoesInputStringContainSpace = false;
            // Let's loop!
            for (int i = 0; i <= commandlength; i++)
            {
                if (commanddata[i] == 32)
                {
                    DoesInputStringContainSpace = true;
                    commanddata.erase(commanddata.begin(), commanddata.begin() + (i+1));
                    
                    break;
                }
                else
                {
                    continue;
                }
            }
            // Now, let's test to see if we actually found a space at all
            if (DoesInputStringContainSpace)
            {
                // The string does contain a space, so fine.
                
            }
            else
            {
                // The string does not contain a space, so let's get rid of the entire commanddata so 
                // we aren't sending the cmdname as commanddata
                commanddata.clear();
            }
            // Now we can look up the function we found, and run it, along with the input
            // the user specified
            std::cout << "Sending: cmdname = " << cmdname << ", commanddata = " + commanddata << std::endl;
            functions[cmdname](commanddata);
        }
    }   
}   