#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor FrontLeft = motor(PORT8, ratio6_1, true);
motor StackLeft = motor(PORT7, ratio6_1, false);
motor BackLeft = motor(PORT10, ratio6_1, true);
motor FrontRight = motor(PORT4, ratio6_1, false);
motor StackRight = motor(PORT2, ratio6_1, true);
motor BackRight = motor(PORT5, ratio6_1, false);
motor conveyerMotor = motor(PORT9, ratio6_1, true);
inertial Inertial3 = inertial(PORT3);
digital_out pistonclamp = digital_out(Brain.ThreeWirePort.A);
controller Controller1 = controller(primary);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}