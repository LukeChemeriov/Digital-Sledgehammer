// Global header functions that can be accessed by any part of the program

// Clear screen macro

#ifdef _WIN32 // if we are on windows
    #define DS_CLEAR_SCREEN system("cls"); // we have to use cls
#else // if we aren't on windows
    #define DS_CLEAR_SCREEN system("clear"); // we'll assume we've landed on a UNIX os (Linux, mac, etc)
#endif