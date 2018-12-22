// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The RailCoin Project
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n _______        _ _    _____      _      \n"  
                "|  __ \   (_) |        / ____|    (_)      \n"
                "| |__) |__ _ _| | |     ___  _ _ __  \n"
                "|  _  // _` | | | |   / _ \| | '_ \ \\ \n"
                "| | \ \  (_| | | | |___| (_) | | | | |\n"
       " |_|   \_\__,_|_|_|\_____\___/|_|_| |_|\n";     

const std::string nonWindowsAsciiArt = 
     "\n	                                                   \n"
        "██████╗  █████╗ ██╗██╗      ██████╗ ██████╗ ██╗███╗   ██╗\n"
        "██╔══██╗██╔══██╗██║██║     ██╔════╝██╔═══██╗██║████╗  ██║\n"
        "██████╔╝███████║██║██║     ██║     ██║   ██║██║██╔██╗ ██║\n"
        "██╔══██╗██╔══██║██║██║     ██║     ██║   ██║██║██║╚██╗██║\n"
        "██║  ██║██║  ██║██║███████╗╚██████╗╚██████╔╝██║██║ ╚████║\n"
        "╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
