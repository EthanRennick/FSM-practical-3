#include "Walking.h"
#include"Jumping.h"
#include"Climbing.h"
#include <Falling.h>
#include "Idle.h"
#include "Crouching.h"

void Walking::jumping(PlayerFSM* a)
{
	std::cout << "Walking -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Walking::climbing(PlayerFSM* a)
{
	std::cout << "Walking -> Climb" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Walking::crouching(PlayerFSM* a)
{
	std::cout << "Walking -> Crouch" << std::endl;
	a->setCurrent(new Crouching());
	delete this;
}

void Walking::falling(PlayerFSM* a)
{
	std::cout << "Walking -> Fall" << std::endl;
	a->setCurrent(new Falling());
	delete this;
}

void Walking::idle(PlayerFSM* a)
{
	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
