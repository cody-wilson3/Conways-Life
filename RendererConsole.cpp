#include "RendererConsole.hpp"

#include "LifeSimulator.hpp"
#include "rlutil.h"

RendererConsole::RendererConsole()
{
    RendererConsole::previousSim;
}

void RendererConsole::render(const LifeSimulator& simulation)
{

    if (previousSim.empty())
    {
        rlutil::cls();
        rlutil::hidecursor();
        previousSim = std::vector<std::vector<bool>>(simulation.getSizeY(), std::vector<bool>(simulation.getSizeX(), false));
    }

    for (std::uint8_t y = 0; y < simulation.getSizeY(); y++)
    {
        for (std::uint8_t x = 0; x < simulation.getSizeX(); x++)
        {
            bool currentCell = simulation.getCell(x, y);
            bool previousCell = previousSim[y][x];

            if (currentCell != previousCell)
            {
                if (currentCell)
                {
                    rlutil::locate(x, y);
                    rlutil::setChar('X');
                }
                if (!currentCell)
                {
                    rlutil::locate(x, y);
                    rlutil::setChar(' ');
                }
            }
            previousSim[y][x] = simulation.getCell(x, y);
        }
    }
    std::cout << std::flush;
};
