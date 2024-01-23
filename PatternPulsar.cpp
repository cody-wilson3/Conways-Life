
#include "PatternPulsar.hpp"

#include <iostream>
#include <vector>

PatternPulsar::PatternPulsar()
{
    PatternPulsar::pulsar =

        // my first state
        {
            { false, false, true, true, true, false, false, false, true, true, true, false, false },
            { false, false, false, false, false, false, false, false, false, false, false, false, false },
            { true, false, false, false, false, true, false, true, false, false, false, false, true },
            { true, false, false, false, false, true, false, true, false, false, false, false, true },
            { true, false, false, false, false, true, false, true, false, false, false, false, true },
            { false, false, true, true, true, false, false, false, true, true, true, false, false },
            { false, false, false, false, false, false, false, false, false, false, false, false, false },
            { false, false, true, true, true, false, false, false, true, true, true, false, false },
            { true, false, false, false, false, true, false, true, false, false, false, false, true },
            { true, false, false, false, false, true, false, true, false, false, false, false, true },
            { true, false, false, false, false, true, false, true, false, false, false, false, true },
            { false, false, false, false, false, false, false, false, false, false, false, false, false },
            { false, false, true, true, true, false, false, false, true, true, true, false, false },
        };

    // his updated
    /*     {
             { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false },
             { false, false, false, false, false, true, false, false, false, false, false, true, false, false, false, false, false },
             { false, false, false, false, false, true, false, false, false, false, false, true, false, false, false, false, false },
             { false, false, false, false, false, true, true, false, false, false, true, true, false, false, false, false, false },
             { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false },
             { false, true, true, true, false, false, true, true, false, true, true, false, false, true, true, true, false },
             { false, false, false, true, false, true, false, true, false, true, false, true, false, true, false, false, false },
             { false, false, false, false, false, true, true, false, false, false, true, true, false, false, false, false, false },
             { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false },
             { false, false, false, false, false, true, true, false, false, false, true, true, false, false, false, false, false },
             { false, false, false, true, false, true, false, true, false, true, false, true, false, true, false, false, false },
             { false, true, true, true, false, false, true, true, false, true, true, false, false, true, true, true, false },
             { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false },
             { false, false, false, false, false, true, true, false, false, false, true, true, false, false, false, false, false },
             { false, false, false, false, false, true, false, false, false, false, false, true, false, false, false, false, false },
             { false, false, false, false, false, true, false, false, false, false, false, true, false, false, false, false, false },
             { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false }
         };*/
}

bool PatternPulsar::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pulsar[y][x];
};
