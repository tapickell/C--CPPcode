//
//  readMe.txt
//  moredice
//
//  Created by Todd Pickell on 4/4/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//
//  Course: CISS 242A Programming II
//
//  Description:
//  Read Me file to describe how to compile and run program for Windows.
//
//***************************************************************************

1. Extract contents of .zip file.

2. Open \WinMoreDice folder.

3. Run the compileMe.bat file.

This will compile the source code and create the runMe.exe file and run it.

Running compileMe.bat calls g++ to compile, if g++ is not found then it
launches the mingw installer and opens the system properties menu.

It also launches the mingw getting started web page.

If installing g++ for the first time be sure to add C:\MinGW\bin to your 
enviromental variables from the system properties menu.

After program has been compiled, it can be ran from the runMe.exe or from running 
the compileMe.bat again.