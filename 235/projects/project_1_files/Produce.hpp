#include <string>

#ifndef PRODUCE_
#define PRODUCE_

namespace produce_details
{
    enum ripeness
    {
        OVERRIPE = 0,
        UNDERRIPE = 1,
        RIPE = 2
    };
    enum conditions
    {
        DAMAGED = 0,
        UNDAMAGED = 1
    };
} // namespace produce_details

class Produce
{
}; // end Produce
#endif