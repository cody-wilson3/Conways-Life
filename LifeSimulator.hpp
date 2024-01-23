#pragma once
#include "Pattern.hpp"

#include <cstdint>
#include <iostream>
#include <vector>

class LifeSimulator
{
  public:
    LifeSimulator(std::uint8_t sizeX, std::uint8_t sizeY);

    void insertPattern(const Pattern& pattern, std::uint8_t startX, std::uint8_t startY);

    void update();

    inline std::uint8_t getSizeX() const { return mySizeX; };
    inline std::uint8_t getSizeY() const { return mySizeY; };
    bool getCell(std::uint8_t x, std::uint8_t y) const;

    // I included
  private:
    std::vector<std::vector<bool>> grid;
    std::uint8_t mySizeX;
    std::uint8_t mySizeY;
    int countAliveNeighbors(int x, int y) const;
};