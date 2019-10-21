#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <PlayerFSM.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void idle(PlayerFSM* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void jumping(PlayerFSM* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void climbing(PlayerFSM* a)
	{
		DEBUG_MSG("State::Climbing");
	}
	virtual void walking(PlayerFSM* a)
	{
		DEBUG_MSG("State::Walking");
	}
	virtual void crouching(PlayerFSM* a)
	{
		DEBUG_MSG("State::Crouching");
	}
	virtual void landing(PlayerFSM* a)
	{
		DEBUG_MSG("State::Landing");
	}
	virtual void falling(PlayerFSM* a)
	{
		DEBUG_MSG("State::Falling");
	}
};

#endif // ! ANIMATION_H

