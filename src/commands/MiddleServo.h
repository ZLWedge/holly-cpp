#ifndef MIDDLE_SERVO_H
#define MIDDLE_SERVO_H

#include "../CommandBase.h"

class MiddleServo: public CommandBase {
public:
	MiddleServo();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
