#include "Crouching.h"

#include "Walking.h"
#include"Climbing.h"
#include "Falling.h"
#include "Idle.h"
#include "Jumping.h"

//void Crouching::handleInput()
//{
//}
//
//void Crouching::update()
//{
//}

void Crouching::jumping(PlayerFSM* a)
{
	std::cout << "Crouching -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Crouching::walking(PlayerFSM* a)
{
	std::cout << "Crouching -> Walk" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Crouching::climbing(PlayerFSM* a)
{
	std::cout << "Crouching -> Climb" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Crouching::falling(PlayerFSM* a)
{
	std::cout << "Crouching -> Fall" << std::endl;
	a->setCurrent(new Falling());
	delete this;
}

void Crouching::idle(PlayerFSM* a)
{
	std::cout << "Crouching -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
