#pragma once
#ifndef FALLING_H
#define FALLING_H

#include <State.h>

class Falling : public State
{
public:
	Falling() {};
	~Falling() {};
	//can go to idling or jumping
	//void idle(PlayerFSM* a);
	//void jumping(PlayerFSM* a);
	void landing(PlayerFSM* a);

};

#endif // !IDLE_H
