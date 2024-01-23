#pragma once
#include "Pattern.hpp"

#include <cstdint>
#include <iostream>
#include <vector>

class PatternGlider : public Pattern
{
  private:
    std::vector<std::vector<bool>> glider;

  public:
    PatternGlider();
    std::uint8_t getSizeX() const override { return 3; }
    std::uint8_t getSizeY() const override { return 3; }
    bool getCell(std::uint8_t x, std::uint8_t y) const override;
};
