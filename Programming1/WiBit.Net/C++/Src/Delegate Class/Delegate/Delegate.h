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
Filename: Delegate.h
Date    : 2011/06/18
Website : http://www.wibit.net
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/
template <class objectDT, class returnDT, class paramDT>
class Delegate
{
  private:
    returnDT (objectDT::*_delegateMethod) (paramDT);
    objectDT* _delegateInstance;
  public:
    Delegate();
    Delegate(objectDT*, returnDT (objectDT::*) (paramDT));
    void setDelegateInstance(objectDT*);
    void setDelegateMethod(returnDT (objectDT::*) (paramDT));
    
    returnDT operator() (paramDT);
};
