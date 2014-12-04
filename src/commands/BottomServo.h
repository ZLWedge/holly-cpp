#ifndef BOTTOM_SERVO_H
#define BOTTOM_SERVO_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class BottomServo: public CommandBase {
public:
	BottomServo();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
