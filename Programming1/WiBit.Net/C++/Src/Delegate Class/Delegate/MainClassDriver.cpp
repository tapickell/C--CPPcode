/*
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
##      ## #### ########  #### ########     ##    ## ######## ########
##  ##  ##  ##  ##     ##  ##     ##        ###   ## ##          ##
##  ##  ##  ##  ##     ##  ##     ##        ####  ## ##          ##
##  ##  ##  ##  ########   ##     ##        ## ## ## ######      ##
##  ##  ##  ##  ##     ##  ##     ##        ##  #### ##          ##
##  ##  ##  ##  ##     ##  ##     ##    ### ##   ### ##          ##
 ###  ###  #### ########  ####    ##    ### ##    ## ########    ## 
Course  : Programming in C++
Filename: MainClassDriver.cpp
Date    : 2011/06/18
Compile : g++ MainClassDriver.cpp -o MainClassDriver.exe
Website : http://www.wibit.net
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/
#include "MainClass.cpp"

string* getArgs(int argc, const char* argv[])
{
  string* Args = new string[argc];
  for(int i = 0; i < argc; i++)
    Args[i] = argv[i];
  return Args;
}

int main(int argc, const char* argv[])
{
  MainClass mainInstance;
  mainInstance.Main(argc, getArgs(argc, argv));
  return 0;
}
