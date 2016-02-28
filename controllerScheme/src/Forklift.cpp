#include "Robot.hpp"

void
Robot::
Forklift()
{
	if(gamePad.GetRawButton(5))
			{
				innerMast1.Set(true);
				innerMast2.Set(true);
			}
			else
			{
				innerMast1.Set(false);
				innerMast2.Set(false);
			}
			if(gamePad.GetRawButton(2))
			{
				carriage.Set(true);
			}
			else
			{
				carriage.Set(false);
			}
			if(gamePad.GetRawButton(6))
			{
				tiltA.Set(DoubleSolenoid::Value::kReverse);
				tiltB.Set(DoubleSolenoid::Value::kReverse);
			}
			else if(gamePad.GetRawButton(6) && tiltA.Get()==DoubleSolenoid::Value::kReverse && tiltB.Get()==DoubleSolenoid::Value::kReverse)
			{
				tiltA.Set(DoubleSolenoid::Value::kForward);
				tiltB.Set(DoubleSolenoid::Value::kForward);
			}
			if(gamePad.GetRawButton(4))
			{
				plate.Set(DoubleSolenoid::Value::kForward);
			}
			else if(gamePad.GetRawButton(4) && plate.Get()==DoubleSolenoid::Value::kForward)
			{
				plate.Set(DoubleSolenoid::Value::kReverse);
			}
			if(gamePad.GetRawButton(10))
			{
				intakeA.Set(DoubleSolenoid::Value::kForward);
				intakeB.Set(DoubleSolenoid::Value::kForward);
			}
			else if(gamePad.GetRawButton(10) && intakeA.Get()==DoubleSolenoid::Value::kReverse && intakeB.Get()==DoubleSolenoid::Value::kReverse)
			{
				intakeA.Set(DoubleSolenoid::Value::kReverse);
				intakeB.Set(DoubleSolenoid::Value::kReverse);
			}
}
