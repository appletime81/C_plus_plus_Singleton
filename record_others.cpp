#include "record_others.h"

using namespace EventLogger;
void writing_data(std::string text)
{

    recordEvent *r_event = r_event->getInstance();
    r_event->logEvent(text);
}