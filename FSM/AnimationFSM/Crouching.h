
#pragma once

#ifndef CROUCHING_H
#define CROUCHING_H

#include <State.h>

class Crouching : public State
{
public:
	Crouching() {};
	~Crouching() {};
	void handleInput();
	void update();

	//can go from crouching to jumping / climbing
	void jumping(PlayerFSM* a);
	void walking(PlayerFSM* a);
	void climbing(PlayerFSM* a);
	void falling(PlayerFSM* a);
	void idle(PlayerFSM* a);

};

#endif // !IDLE_H