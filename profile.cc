#include "profile.h"
#include <cmath>

const double Profile::GetTime() {
  float goal = this->goal_.postion;//this is current position
  float current = this->current_.postion;
  float delta_x = goal - current;
  double t = sqrt(2*delta_x/kMaxAcceleration);

  return t;
  
  return 0.0;
}
