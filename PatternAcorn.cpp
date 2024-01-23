#include "PatternAcorn.hpp"

#include <vector>

PatternAcorn::PatternAcorn()
{
    PatternAcorn::acorn = acorn = {
        { false, true, false, false, false, false, false },
        { false, false, false, true, false, false, false },
        { true, true, false, false, true, true, true }
    };
}

inline bool PatternAcorn::getCell(std::uint8_t x, std::uint8_t y) const
{
    return acorn[y][x];
};