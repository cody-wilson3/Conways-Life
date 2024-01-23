
#include "PatternBlock.hpp"

#include <vector>
PatternBlock::PatternBlock()
{
    PatternBlock::block = {
        { true, true },
        { true, true }
    };

    /* {
         { false, true, true, true },
         { true, true, true, false }
     };*/
}

inline bool PatternBlock::getCell(std::uint8_t x, std::uint8_t y) const
{
    return block[y][x];
};