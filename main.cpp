#include "LifeSimulator.hpp"
#include "Pattern.hpp"
#include "PatternAcorn.hpp"
#include "PatternBlinker.hpp"
#include "PatternBlock.hpp"
#include "PatternGlider.hpp"
#include "PatternGosperGliderGun.hpp"
#include "PatternPulsar.hpp"
#include "Renderer.hpp"
#include "RendererConsole.hpp"
#include "rlutil.h"

#include <cstdint>
#include <iostream>
#include <thread>

int main()
{
    std::uint32_t numberRenders = 150;

    LifeSimulator newSim(static_cast<int8_t>(rlutil::tcols()), static_cast<int8_t>(rlutil::trows()));
    newSim.insertPattern(PatternGosperGliderGun(), 1, 1);
    newSim.insertPattern(PatternAcorn(), 80, 5);
     newSim.insertPattern(PatternBlinker(), 50, 15);
    newSim.insertPattern(PatternGlider(), 5, 10);
    newSim.insertPattern(PatternPulsar(), 40, 15);

    RendererConsole newConsole;
    for (unsigned int i = 0; i < numberRenders; i++)
    {
        newConsole.render(newSim);
        std::this_thread::sleep_for(std::chrono::milliseconds(180));
        newSim.update();
    }

    rlutil::anykey();
}
