#pragma once
#include "Pattern.hpp"

#include <cstdint>
#include <iostream>
#include <vector>

class PatternAcorn : public Pattern
{
  private:
    std::vector<std::vector<bool>> acorn;

  public:
    PatternAcorn();
    std::uint8_t getSizeX() const override { return 7; }
    std::uint8_t getSizeY() const override { return 3; }
    bool getCell(std::uint8_t x, std::uint8_t y) const override;
};
