#include "ScopedPtr.h"

int main()
{
	Entity e;
	e.Print();
	
	//to initialize a Entity pointer and use the parameter contrustor 
	Entity *en = &Entity(5);
}
