
#pragma once
#include "Pattern.hpp"

#include <cstdint>
#include <iostream>
#include <vector>

class PatternPulsar : public Pattern
{

  private:
    std::vector<std::vector<bool>> pulsar;

  public:
    PatternPulsar();
    std::uint8_t getSizeX() const override { return 13; }
    std::uint8_t getSizeY() const override { return 13; }
    bool getCell(std::uint8_t x, std::uint8_t y) const override;
};
