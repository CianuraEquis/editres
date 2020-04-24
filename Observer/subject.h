/*Project : Observer Example
 Authors : Erich Gamma, Richard Helm, Ralph Johnson and John
Vlissides
 Implementer : Gabriel Nicolás González Ferreira
**/
#ifndef subject_h
#define subject_h

#include <sstream>
#define TO_STRING( x ) dynamic_cast< std::ostringstream & >( \
 ( std::ostringstream() << std::dec << x ) ).str()
#include <iostream>
#include <list>
#include <string>
#include "ISubject.h"
#include "IObserver.h"
using namespace std;



class Subject : public ISubject
{
    public:
        Subject(){};
        virtual ~Subject(){}
        void Attach (IObserver* o)
        {
            m_observers.push_front(o);
        }
        void Detach (IObserver* o)
        {
            m_observers.remove(o);
        }
        list<IObserver*> getObservers(){
            return m_observers;
        }

    private:
        list<IObserver*> m_observers;
};

#endif
