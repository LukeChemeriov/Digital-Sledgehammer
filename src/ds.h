// DS.h
// For the Digital Sledgehammer project
// (c) LukeChemeriov, 2022

// Preprocessor statements
#include <string>
#include <functional>
#include <unordered_map>
#include "functions/functions.h"

// Create an unordered function map
std::unordered_map<std::string, std::function<void(const std::string &) >> functions;

// A function to register all of the functions
void RegisterFunctions()
{
    functions["echo"] = echoFunction;
    functions["clear"] = clearFunction;
    functions["exit"] = exitFunction;
    // Add more functions here as they are created
}

