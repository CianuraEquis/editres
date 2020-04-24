#include <iostream>
#include "Subject.h"
#include "clocktimer.h"
#include "analogclock.h"
#include "digitalclock.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	ISubject* subject = new Subject();
    ClockTimer* timer = new ClockTimer(subject);
    AnalogClock* ac = new AnalogClock(timer);
    DigitalClock* dc = new DigitalClock(timer);

    timer->Tick();
    timer->Tick();
    timer->Tick();
    timer->Tick();
    timer->Tick();
    timer->Tick();


    delete ac;
    delete dc;
    delete timer;
    delete subject;


	return 0;


}
