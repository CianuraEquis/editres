#ifndef ChangeNotifier_h
#define ChangeNotifier_h
#include "IChangeNotifier.h"
#include "IObserver.h"

class ChangeNotifier : public IChangeNotifier {
    public:
        ChangeNotifier(){};
        virtual ~ChangeNotifier(){};

        virtual void Notify(list<IObserver*> observers){
            list<IObserver*>::iterator it;
            for (it = observers.begin() ; it != observers.end(); ++it)
            {
                (*it)->Update();
            }
        }


};

#endif




