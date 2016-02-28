#include "WPILib.h"

class Robot : public SampleRobot
{
	Joystick stick1;
		Joystick stick2;
		Joystick gamePad;
		DoubleSolenoid tiltA;
		DoubleSolenoid tiltB;
		DoubleSolenoid intakeA;
		DoubleSolenoid intakeB;
		Solenoid innerMast1;
		Solenoid innerMast2;
		DoubleSolenoid plate;
		Solenoid carriage;
		Compressor compressor;
		Servo cameraRotate;
		Servo cameraTilt;
		Talon intakeRotate;
		Talon rightFront;
		Talon rightBack;
		Talon leftFront;
		Talon leftBack;
		DigitalInput limitSwitch;

public:
	Robot() :
		stick1(0),
		stick2(1),
		gamePad(2),
		tiltA(0,0,1),
		tiltB(0,2,3),
		intakeA(0,4,5),
		intakeB(0,6,7),
		innerMast1(1,0),
		innerMast2(1,1),
		plate(1,2,3),
		carriage(1,4),
		compressor(0),
		cameraRotate(0),
		cameraTilt(1),
		intakeRotate(2),
		rightFront(0),
		rightBack(1),
		leftFront(3),
		leftBack(4),
		limitSwitch(9)
	{
	}
	void Autonomous();
	void OperatorControl();
	void Drive();
	void Forklift();
	void intakeOuttake();
	void Camera();
};
