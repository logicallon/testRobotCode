#include "Robot.hpp"

void
Robot::
intakeOuttake()
{
	float leftStick=gamePad.GetRawAxis(1); //establishes the variable which is equal to the y-axis of the left stick on the gamepad
	if(gamePad.GetRawButton(10)) // if button 10 is pressed
	{
		intakeA.Set(DoubleSolenoid::Value::kReverse);
		intakeB.Set(DoubleSolenoid::Value::kReverse);
	} //set the double solenoids controlling the retracting of the intake to reverse. this is done because the intake should already be pushed out during autonomous
	if(gamePad.GetRawButton(10) && intakeA.Get()==DoubleSolenoid::Value::kReverse && intakeB.Get()==DoubleSolenoid::Value::kReverse)
	{
		intakeA.Set(DoubleSolenoid::Value::kReverse);
		intakeB.Set(DoubleSolenoid::Value::kReverse);
	}
	if(gamePad.GetRawButton(1) && limitSwitch.Get()== 0)
	{
		intakeRotate.Set(1);
	}
	else
	{
		intakeRotate.Set(0);
	}
	if(gamePad.GetRawButton(3) && limitSwitch.Get()== 1)
	{
		intakeRotate.Set(-1);
	}
	else
	{
		intakeRotate.Set(0);
	}
	if(gamePad.GetRawButton(3) && limitSwitch.Get()== 1 && fabs(leftStick) > 0)
	{
		intakeRotate.Set(-0.5);
	}
	else
	{
		intakeRotate.Set(0);
	}
}
