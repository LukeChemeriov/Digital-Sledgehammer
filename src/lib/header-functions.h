// Global header functions that can be accessed by any part of the program
// 
#pragma once
// Clear screen macro

#ifdef _WIN32 // if we are on windows
    #define DS_CLEAR_SCREEN system("cls"); // we have to use cls
#else // if we aren't on windows
    #define DS_CLEAR_SCREEN system("clear"); // we'll assume we've landed on a UNIX os (Linux, mac, etc)
#endif

// Check to see if a key exists inside an unordered_map
bool CheckKeyExistsInMap(std::unordered_map<std::string, std::function<void(const std::string &) >> map, std::string key)
{
    // Key is not present
    if (map.count(key) == 0)
    {
        return false;
    }
    return true;
}
