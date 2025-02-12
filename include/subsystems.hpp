#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');


inline pros::MotorGroup Convey({9},pros::v5::MotorGears::blue);
inline pros::adi::Pneumatics Clamp('A',false);
inline pros::adi::Pneumatics PowerTakeOff('B',false);
inline pros::adi::Pneumatics Flippy('C',false);
