#include "Landing.h"
#include "Crouching.h"
#include"Walking.h"
#include"Idle.h"
#include"Jumping.h"

void Landing::idle(PlayerFSM* a)
{
	std::cout << "Landing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
