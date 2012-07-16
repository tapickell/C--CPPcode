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
Filename: MainClass.cpp
Date    : 2011/06/18
Website : http://www.wibit.net
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/
#include <iostream>
using namespace std;
#include "Delegate.cpp"
#include "MainClass.h"
#include "../../11 - Class Inheritance/person.cpp"
void MainClass :: Main(int argc, string args[])
{
  person* p = new person();
  Delegate<person, void, string> setName;
  setName.setDelegateInstance(p);
  setName.setDelegateMethod(&person :: setFirstName);
  setName("WiBit.Net");
  cout << p->getFirstName() << endl;
}
