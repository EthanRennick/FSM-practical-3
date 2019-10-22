#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	//can go to falling
	void falling(PlayerFSM* a);
	

};

#endif // !IDLE_H