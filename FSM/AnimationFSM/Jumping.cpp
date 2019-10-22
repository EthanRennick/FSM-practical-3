#include <Jumping.h>
#include "Falling.h"

#include <string>

void Jumping::falling(PlayerFSM* a)
{
	std::cout << "Jumping -> Fall" << std::endl;
	a->setCurrent(new Falling());
	
	delete this;
}
