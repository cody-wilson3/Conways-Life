
#include "Pattern.hpp"

#include <cstdint>
#include <iostream>
#include <vector>

class PatternGosperGliderGun : public Pattern
{
  private:
    std::vector<std::vector<bool>> ggGun;

  public:
    PatternGosperGliderGun();
    std::uint8_t getSizeX() const override { return 36; }
    std::uint8_t getSizeY() const override { return 9; }
    bool getCell(std::uint8_t x, std::uint8_t y) const override;
};
