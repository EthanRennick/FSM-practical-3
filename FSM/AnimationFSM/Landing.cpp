#include "Landing.h"
#include "Crouching.h"
#include"Walking.h"
#include"Idle.h"
#include"Jumping.h"


void Landing::crouching(PlayerFSM* a)
{
	std::cout << "Landing -> Crouch" << std::endl;
	a->setCurrent(new Crouching());
	delete this;
}

void Landing::idle(PlayerFSM* a)
{
	std::cout << "Landing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Landing::walking(PlayerFSM* a)
{
	std::cout << "Landing -> Walk" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Landing::jumping(PlayerFSM* a)
{
	std::cout << "Landing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
