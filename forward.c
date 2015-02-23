#pragma config(Hubs,  S1, HTMotor,  HTServo,  HTMotor,  HTMotor)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     Lift,          tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     nothing,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     Hammer,        tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_2,     Sweeper,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_1,     Right,         tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_2,     Left,          tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C2_1,    Piston,               tServoStandard)
#pragma config(Servo,  srvo_S1_C2_2,    RightServo,           tServoStandard)
#pragma config(Servo,  srvo_S1_C2_3,    LeftServo,            tServoStandard)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.


const int grabberDown = 40;
const int grabberUp = -60;

void setGrabber(int a) {
	servo[RightServo] = 190 + a;
	servo[LeftServo] = 153 - a;
}

void initializeRobot() {
	setGrabber(grabberUp);
  return;
}

task main() {
  initializeRobot();
  waitForStart();
 	motor[Left] = 80;
  motor[Right] = 80;
  wait1Msec(3000);
  motor[Left] = 0;
  motor[Right] = 0;
}
