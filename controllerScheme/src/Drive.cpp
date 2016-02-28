#include "Robot.hpp"

void
Robot::
Drive()
			{
				{
				float leftDrive=-stick1.GetRawAxis(1);
				float rightDrive=stick2.GetRawAxis(1);
				if(fabs(leftDrive) > 0.1)
				{
					leftFront.Set(leftDrive);
					leftBack.Set(leftDrive);
				}
				if(fabs(rightDrive)> 0.1)
				{
					rightFront.Set(rightDrive);
					rightBack.Set(rightDrive);
				}
				while(stick1.GetRawButton(1) || stick2.GetRawButton(1))
				{
					rightFront.Set(0.45*rightDrive);
					rightBack.Set(0.45*rightDrive);
					leftFront.Set(0.45*leftDrive);
					leftBack.Set(0.45*leftDrive);
				}
			while(stick1.GetRawButton(2) || stick2.GetRawButton(2))
			{

				if(fabs(rightDrive) > 0.1)
				{
					leftFront.Set(-rightDrive);
					leftBack.Set(-rightDrive);
				}
				if(fabs(rightDrive) > 0.1)
				{
					rightFront.Set(-leftDrive);
					rightFront.Set(-leftDrive);
				}
				while(stick1.GetRawButton(1) || stick2.GetRawButton(1))
				{
					rightFront.Set(0.45*rightDrive);
					rightBack.Set(0.45*rightDrive);
					leftFront.Set(0.45*leftDrive);
					leftBack.Set(0.45*leftDrive);
				}
			}
		}
	}
