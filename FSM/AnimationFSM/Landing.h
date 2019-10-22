#pragma once

#ifndef LANDING_H
#define LANDING_H

#include <State.h>

class Landing : public State
{
public:
	Landing() {};
	~Landing() {};


	//can go from idle to jumping / climbing
	void idle(PlayerFSM* a);


};

#endif // !IDLE_H