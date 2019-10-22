#pragma once

#ifndef WALKING_H
#define WALKING_H

#include <State.h>

class Walking : public State
{
public:
	Walking() {};
	~Walking() {};
	
	//can go from idle to jumping / climbing 
	void jumping(PlayerFSM* a);
	void climbing(PlayerFSM* a);
	void crouching(PlayerFSM* a);
	void falling(PlayerFSM* a);
	void idle(PlayerFSM* a);

};

#endif // !IDLE_H