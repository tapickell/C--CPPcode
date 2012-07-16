#include "StdAfx.h"
#ifndef MYDELEGATE
#define MYDELEGATE


#include "MyDelegate.h"

template <class objectDT, class returnDT, class paramDT>
MyDelegate<objectDT, returnDT, paramDT>::MyDelegate()
{
	_delegateMethod = NULL;
	_delegateInstance = NULL;
}

template <class objectDT, class returnDT, class paramDT>
MyDelegate<objectDT, returnDT, paramDT>::MyDelegate(objectDT* delegateInstance, 
                  returnDT (objectDT::*delegateMethod) (paramDT))
{
  _delegateMethod = delegateMethod;
  _delegateInstance = delegateInstance;
}

template <class objectDT, class returnDT, class paramDT>
void MyDelegate<objectDT, returnDT, paramDT>::setDelegateInstance(objectDT* delegateInstance)
{
  _delegateInstance = delegateInstance;
}

template <class objectDT, class returnDT, class paramDT>
void MyDelegate<objectDT, returnDT, paramDT>::setDelegateMethod(returnDT (objectDT::*delegateMethod) (paramDT))
{
  _delegateMethod = delegateMethod;
}

template <class objectDT, class returnDT, class paramDT>
returnDT MyDelegate<objectDT, returnDT, paramDT>::operator() (paramDT param)
{
  if (_delegateInstance == NULL)
    throw new std::string("Delegate instance cannot be NULL.");
  if (_delegateMethod == NULL)
    throw new std::string("Delegate method cannot be NULL.");
    
  return (_delegateInstance->*_delegateMethod)(param);
}

#endif

