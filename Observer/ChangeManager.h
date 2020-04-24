#ifndef ChangeNotifier_h
#define ChangeNotifier_h

class ChangeNotifier : public IChangeNotifier {
    public:
        ChangeNotifier(){};
        virtual ~IChangeNotifier(){};

        virtual void Notify(list<IObserver*> observers){
             list<Observer*>::iterator it;
            for (it = observers.begin() ; it != observers.end(); ++it)
            {
                (*it)->Update();
            }
        }


};

#endif




