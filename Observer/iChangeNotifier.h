#ifndef iChangeNotifier_h
#define iChangeNotifier_h
#include "IObserver.h"

class IChangeNotifier {
    public:
        virtual void Notify(list<IObserver*> observers) = 0;
        virtual ~IChangeNotifier(){};
};

#endif
