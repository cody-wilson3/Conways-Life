#pragma once

#include "LifeSimulator.hpp"
#include "Renderer.hpp"
#include "rlutil.h"

#include <cstdint>
#include <vector>

class RendererConsole : public Renderer
{
  public:
    RendererConsole();
    void render(const LifeSimulator& simulation) override;

  private:
    std::vector<std::vector<bool>> previousSim;
};
