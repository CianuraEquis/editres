#ifndef clocktimer_h
#define clocktimer_h
#include "ChangeNotifier.h"
#include "Subject.h"



class ClockTimer
{
    public:
        ClockTimer(ISubject* subject)
        {
            m_hours = 0;
            m_minutes = 0;
            m_seconds = 0;
            m_subject = subject;
        }

        ~ClockTimer(){}

        int GetHour( void )
        {
            return this->m_hours;
        }

        int GetMinute( void )
        {
            return this->m_minutes;
        }

        int GetSecond( void )
        {
            return this->m_seconds;
        }

        ISubject* getSubject()
        {
            return m_subject;
        }

        string Tick ()
        {
         // No update internal time-keeping state, only a demo.
         // ...
             m_seconds++;
            if(m_seconds == 60)
            {
                m_seconds = 0;
                m_minutes++;
                if(m_minutes == 60)
                {
                    m_seconds = 0;
                    m_minutes = 0;
                    m_hours++;
                    if(m_hours == 24)
                    {
                        m_seconds = 0;
                        m_minutes = 0;
                        m_hours = 0;
                    }
                }
            }
            notifier->Notify(m_subject->getObservers());
            return 0;
        }

    private:
        int m_hours;
        int m_minutes;
        int m_seconds;
        ISubject* m_subject;
        IChangeNotifier* notifier;
};

#endif

