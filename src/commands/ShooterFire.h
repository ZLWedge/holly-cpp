#ifndef SHOOTER_MOTOR_H
#define SHOOTER_MOTOR_H

#include "../CommandBase.h"

class ShooterMotor: public CommandBase {
public:
	ShooterMotor();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
