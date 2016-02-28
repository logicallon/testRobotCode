#include "Robot.hpp"

void
Robot::
Camera()
{
	{
		if(gamePad.GetRawButton(8))
		{
			cameraRotate.Set(.6);
			cameraTilt.Set(1.0);
		}
		else if(gamePad.GetRawButton(8) && cameraRotate.Get()==(0.6) && cameraTilt.Get()==(1.0))
		{
			cameraRotate.Set(.4);
			cameraTilt.Set(0);
		}
	}
}
