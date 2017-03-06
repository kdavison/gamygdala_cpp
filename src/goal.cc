#include "goal.h"

Goal::Goal(std::string name, float utility, bool isMaintenance)
  : _name(name)
  , _utility(utility)
  , _isMaintenance(isMaintenance)
  , _likelihood(0.5)
{
}

std::string Goal::Name() const { return _name; }

float Goal::Utility() const { return _utility; }
