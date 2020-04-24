#ifndef isubject_h
#define isubject_h
#include "IObserver.h"
#include <list>


class ISubject
{
    public:
        virtual ~ISubject(){}
        virtual void Attach (IObserver* o) = 0;
        virtual void Detach (IObserver* o) = 0;
        virtual list<IObserver*> getObservers()= 0;
        //virtual void Notify () = 0;
};

#endif
