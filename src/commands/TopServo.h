#ifndef TOP_SERVO_H
#define TOP_SERVO_H

#include "../CommandBase.h"

class TopServo: public CommandBase {
public:
	TopServo();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
