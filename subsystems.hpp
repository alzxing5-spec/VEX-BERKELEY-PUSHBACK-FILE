#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::Motor stagest(11);
inline pros::Motor stagend(12);
inline pros::Motor stagerd(14);
inline pros::Motor stageth(13);
inline ez::Piston tongue('H');
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');