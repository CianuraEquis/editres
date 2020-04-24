
/**********************************OBSERVER INTERFACE************************************/
/**An abstract class defines the Observer interface:**/
#ifndef iobserver_h
#define iobserver_h


class IObserver
{
    public:
        virtual ~IObserver(){};
        virtual void Update() = 0;
};

#endif
