#include "LifeSimulator.hpp"

#include "Pattern.hpp"

#include <cstdint>
#include <iostream>
#include <vector>

LifeSimulator::LifeSimulator(std::uint8_t sizeX, std::uint8_t sizeY)
{
    LifeSimulator::mySizeX = sizeX;
    LifeSimulator::mySizeY = sizeY;
    std::vector<std::vector<bool>> temp(mySizeY, std::vector<bool>(mySizeX, false));
    LifeSimulator::grid = temp;
}

bool LifeSimulator::getCell(std::uint8_t x, std::uint8_t y) const
{
    if (x >= mySizeX || y >= mySizeY)
    {
        return false;
    }
    return grid[y][x];
};

// WORKING PERFECT DO NOT TOUCH
void LifeSimulator::insertPattern(const Pattern& pattern, std::uint8_t startX, std::uint8_t startY)
{
    for (std::uint8_t y = 0; y < pattern.getSizeY(); y++)
    {
        for (std::uint8_t x = 0; x < pattern.getSizeX(); x++)
        {
            if (x + startX < getSizeX() && y + startY < getSizeY())
            {
                std::uint8_t newY = y + startY;
                std::uint8_t newX = x + startX;
                grid[newY][newX] = pattern.getCell(x, y);
            }
        }
    }
}

void LifeSimulator::update()
{
    std::vector<std::vector<bool>> temp(mySizeY, std::vector<bool>(mySizeX, false));

    for (int y = 0; y < getSizeY(); y++)
    {
        for (int x = 0; x < getSizeX(); x++)
        {
            int aliveNeighbors = countAliveNeighbors(x, y);

            if ((aliveNeighbors == 2 || aliveNeighbors == 3) && grid[y][x])
            {
                temp[y][x] = true;
            }
            else if (!grid[y][x] && aliveNeighbors == 3)
            {
                temp[y][x] = true;
            }
            else
            {
                temp[y][x] = false;
            }
        }
    }

    grid = temp;
}

int LifeSimulator::countAliveNeighbors(int x, int y) const
{
    int aliveNeighbors = 0;

    for (int i = -1; i <= 1; ++i)
    {
        for (int j = -1; j <= 1; ++j)
        {
            // Check if indices are within valid ranges
            int testingX = x + j;
            int testingY = y + i;

            if (testingX >= 0 && testingX < getSizeX() &&
                testingY >= 0 && testingY < getSizeY() &&
                !(i == 0 && j == 0))
            {
                if (grid[testingY][testingX])
                {
                    aliveNeighbors++;
                }
                // aliveNeighbors += grid[testingY][testingX];
            }
        }
    }

    return aliveNeighbors;
}
