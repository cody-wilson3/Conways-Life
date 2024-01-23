
#include "PatternBlinker.hpp"

#include <vector>

PatternBlinker::PatternBlinker()
{
    PatternBlinker::blinker = {
        { true },
        { true },
        { true }
    };
}

inline bool PatternBlinker::getCell(std::uint8_t x, std::uint8_t y) const
{
    return blinker[y][x];
};