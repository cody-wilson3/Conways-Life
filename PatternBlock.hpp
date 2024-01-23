#pragma once
#include "Pattern.hpp"

#include <cstdint>
#include <iostream>
#include <vector>

class PatternBlock : public Pattern
{

  private:
    std::vector<std::vector<bool>> block;

  public:
    PatternBlock();
    std::uint8_t getSizeX() const override { return 2; }
    std::uint8_t getSizeY() const override { return 2; }
    /*std::uint8_t getSizeX() const override { return 4; }
    std::uint8_t getSizeY() const override { return 2; }*/
    bool getCell(std::uint8_t x, std::uint8_t y) const override;
};
