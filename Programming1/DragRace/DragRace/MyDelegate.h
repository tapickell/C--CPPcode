#pragma once
template <class objectDT, class returnDT, class paramDT>
class MyDelegate
{
private:
    returnDT (objectDT::*_delegateMethod) (paramDT);
    objectDT* _delegateInstance;
public:
	MyDelegate();
	MyDelegate(objectDT*, returnDT (objectDT::*) (paramDT));
	void setDelegateInstance(objectDT*);
    void setDelegateMethod(returnDT (objectDT::*) (paramDT));
    
    returnDT operator() (paramDT);
};

