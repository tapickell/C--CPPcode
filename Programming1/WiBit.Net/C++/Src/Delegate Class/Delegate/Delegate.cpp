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
Filename: Delegate.cpp
Date    : 2011/06/18
Website : http://www.wibit.net
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/
#ifndef WIBITDELEGATE
#define WIBITDELEGATE

#include <iostream>
#include "Delegate.h"

template <class objectDT, class returnDT, class paramDT>
Delegate<objectDT, returnDT, paramDT> :: Delegate()
{
  _delegateMethod = NULL;
  _delegateInstance = NULL;
}

template <class objectDT, class returnDT, class paramDT>
Delegate<objectDT, returnDT, paramDT> :: 
              Delegate(objectDT* delegateInstance, 
                  returnDT (objectDT::*delegateMethod) (paramDT))
{
  _delegateMethod = delegateMethod;
  _delegateInstance = delegateInstance;
}

template <class objectDT, class returnDT, class paramDT>
void Delegate<objectDT, returnDT, paramDT> :: 
              setDelegateInstance(objectDT* delegateInstance)
{
  _delegateInstance = delegateInstance;
}

template <class objectDT, class returnDT, class paramDT>
void Delegate<objectDT, returnDT, paramDT> :: 
              setDelegateMethod(returnDT (objectDT::*delegateMethod) (paramDT))
{
  _delegateMethod = delegateMethod;
}

template <class objectDT, class returnDT, class paramDT>
returnDT Delegate<objectDT, returnDT, paramDT> :: 
              operator() (paramDT param)
{
  if (_delegateInstance == NULL)
    throw new std::string("Delegate instance cannot be NULL.");
  if (_delegateMethod == NULL)
    throw new std::string("Delegate method cannot be NULL.");
    
  return (_delegateInstance->*_delegateMethod)(param);
}

#endif
