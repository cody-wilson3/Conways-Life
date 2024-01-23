
#include "PatternGlider.hpp"

#include <vector>

PatternGlider::PatternGlider()
{
    PatternGlider::glider = { { false, false, true },
                              { true, false, true },
                              { false, true, true } };
}

bool PatternGlider::getCell(std::uint8_t x, std::uint8_t y) const
{
    return glider[y][x];
};