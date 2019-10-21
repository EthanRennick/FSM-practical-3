#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	//can go to idling or climbing
	void climbing(PlayerFSM* a);
	//void landing(PlayerFSM* a);
	void idle(PlayerFSM* a);
//	void walking(PlayerFSM* a);
//	void crouching(PlayerFSM* a);

};

#endif // !IDLE_H