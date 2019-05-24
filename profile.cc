#include "profile.h"
#include <cmath>

const double Profile::GetTime() {
  //part one
  float goal = this->goal_.postion;//this is current position
  float current = this->current_.postion;
  float delta_x = goal - current;
  double t = sqrt(2*delta_x/kMaxAcceleration);
  
  //part two
  double velocity = this->current_.velocity;//intital velocity
  double t1 = (kMaxVelocity-velocity)/kMaxAcceleration;// equasion is (vf-vi)/a
  double s1 = t1*(kMaxVelocity/2);
  double remainting_distance = goal-s1;
  double t2 = s1/KMaxVelocity; //seccond period of time
  double final_time = t1 + t2; //final time

  //calculations
  double distance = s1 * 2 + remainting_distance;
  double everything = t1 + t2 + t1; //last thing
  return everything;
}
