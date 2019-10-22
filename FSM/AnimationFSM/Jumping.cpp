#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>
#include "Walking.h"
#include"Crouching.h"
#include"Landing.h"

#include <string>

void Jumping::idle(PlayerFSM* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::walking(PlayerFSM* a)
{
	std::cout << "Jumping -> Walk" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Jumping::crouching(PlayerFSM* a)
{
	std::cout << "Jumping -> Crouch" << std::endl;
	a->setCurrent(new Crouching());
	delete this;
}

void Jumping::climbing(PlayerFSM* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Jumping::landing(PlayerFSM* a)
{
	std::cout << "Jumping -> Land" << std::endl;
	a->setCurrent(new Landing());
	delete this;
}
