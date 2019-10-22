#include "Falling.h"

#include"Idle.h"
#include "Jumping.h"
#include"Landing.h"

//
//void Falling::idle(PlayerFSM* a)
//{
//	std::cout << "Falling -> Idle" << std::endl;
//	a->setCurrent(new Idle());
//	delete this;
//}
//
//void Falling::jumping(PlayerFSM* a)
//{
//	std::cout << "Falling -> Jump" << std::endl;
//	a->setCurrent(new Jumping());
//	delete this;
//}

void Falling::landing(PlayerFSM* a)
{
	std::cout << "Falling -> Land" << std::endl;
	a->setCurrent(new Landing());
	delete this;
}
