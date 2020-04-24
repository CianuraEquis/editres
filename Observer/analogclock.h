
/*************************************************************************************************/
/****************************************CONCRETE ANALOG CLOCK***********************************/
/**An AnalogClock class can be defined in the same way.**/

#ifndef analogclock_h
#define analogclock_h
#include "Iwidget.h"
#include "IObserver.h"
#include <iostream>

class AnalogClock: public IWidget, public IObserver
{
    public:
        AnalogClock (ClockTimer* s)
        {
            m_timer = s;
            m_timer->getSubject()->Attach(this);
        }

        ~AnalogClock ()
        {
            m_timer->getSubject()->Detach(this);
        }

        void Update ()
        {
                Draw();
        }

        void Draw ()
        {
         // get the new values from the subject
            string hours = TO_STRING(m_timer->GetHour());
            string minutes = TO_STRING(m_timer->GetMinute());
            string seconds = TO_STRING(m_timer->GetSecond());
            if(hours.size() == 1){hours = "0"+hours;}
            if(minutes.size() == 1){minutes = "0"+minutes;}
            if(seconds.size() == 1){seconds = "0"+seconds;}
            // draw the digital clock
            std::cout <<"I am Analog: "<< hours<<":"<<minutes<<":"<<seconds<<std::endl;
        }
    private:
        ClockTimer* m_timer;
};

#endif

