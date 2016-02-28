#include "Robot.hpp"


	void
	Robot::
	OperatorControl()
	{
		while (IsOperatorControl() && IsEnabled())
		{

			Drive();
			Forklift();
			intakeOuttake();
			Camera();
		}

	}

START_ROBOT_CLASS(Robot)
